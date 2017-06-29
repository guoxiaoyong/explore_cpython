# Copyright (c) 2017 Xiaoyong Guo

import StringIO
import dis
import marshal
import struct
import sys
import time
import types
import py_compile


def disassemble(code, depth=0):
  original_stdout = sys.stdout
  string_io = StringIO.StringIO()
  sys.stdout = string_io
  dis.disassemble(code)
  sys.stdout = original_stdout
  assembly = string_io.getvalue().split('\n')
  space = ' '
  assembly = '\n'.join([space*2*depth + line for line in assembly])
  return assembly


class PycViewer(object):
  def __init__(self, filename):
    with open(filename, 'rb') as pysrc:
      self._content = pysrc.read()
    if '\0' in self._content:
      # Assume we are reading pyc file
      self._magic = self._content[:4]
      self._modtime = struct.unpack('I', self._content[4:8])[0]
      self._code = marshal.loads(self._content[8:])
    else:
      # Assume |filename| is python script
      self._magic = 'No magic number'
      self._modtime = 'No modification time'
      self._code = compile(self._content, filename, 'exec')
    self._string_io = StringIO.StringIO()

  def _write_string(self, string, depth=0):
    space = ' '
    self._string_io.write(space*2*depth)
    self._string_io.write(string)
    self._string_io.write('\n')

  def _write_string_hex(self, label, string, depth):
    space = ' '
    string = string.encode('hex')
    if len(string) < 60:
      self._string_io.write(space*2*depth)
      self._string_io.write(label + ': ')
      self._string_io.write(string)
      self._string_io.write('\n')
    else:
      self._string_io.write(space*2*depth)
      self._string_io.write(label)
      self._string_io.write(':\n')
      for i in range(0, len(string), 60):
        self._string_io.write(space*2*(depth+1))
        self._string_io.write(string[i:i+60])
        self._string_io.write('\n')

  def codeobj_to_string(self, code, depth=0):
    self._write_string("CodeObject:", depth)
    self._write_string("argcount: %d" % (code.co_argcount,), depth+1)
    self._write_string("nlocals: %d" % (code.co_nlocals,), depth+1)
    self._write_string("stacksize: %d" % (code.co_stacksize,), depth+1)
    self._write_string("flags: %04x" % (code.co_flags,), depth+1)
    self._write_string_hex("code", code.co_code, depth+1)
    self._write_string("names: %r" % (code.co_names,), depth+1)
    self._write_string("consts:", depth+1)

    codeobj_list = []
    for const in code.co_consts:
      if type(const) == types.CodeType:
        codeobj_list.append(const)
        self._write_string("<code object>", depth+2)
      else:
        self._write_string("%r" % const, depth=depth+2)

    self._write_string("varnames: %r" % (code.co_varnames,), depth+1)
    self._write_string("freevars: %r" % (code.co_freevars,), depth+1)
    self._write_string("cellvars: %r" % (code.co_cellvars,), depth+1)
    self._write_string("filename: %r" % (code.co_filename,), depth+1)
    self._write_string("name: %r" % (code.co_name,), depth+1)
    self._write_string("firstlineno: %d" % (code.co_firstlineno,), depth+1)
    self._write_string_hex("lnotab", code.co_lnotab, depth+1)
    self._write_string("assembly code:", depth+1)
    self._string_io.write(disassemble(code, depth+1))

    for codeobj in codeobj_list:
      self.codeobj_to_string(codeobj, depth+2)
    return self._string_io.getvalue()

  def show(self):
    print self.codeobj_to_string(self._code)


if __name__ == '__main__':
  if len(sys.argv) != 2:
    print(sys.argv[0] + ' py_source_file')
  else:
    pyc_viewer = PycViewer(sys.argv[1])
    pyc_viewer.show()
