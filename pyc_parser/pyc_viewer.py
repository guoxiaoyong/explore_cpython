# Copyright (c) 2017 Xiaoyong Guo

import StringIO
import dis
import marshal
import struct
import sys
import time
import types
import py_compile

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

  def _write_string(string, depth=0):
    space = ' '
    self._string_io.write(space*2*depth)
    self._string_io.write(string)
    self._string_io.write('\n')

  def _write_string_hex(label, string, depth):
    space = ' '
    string = string.encode('hex')
    if len(string) < 60:
      self._string_io.write(space*2*depth)
      self._string_io.write(label + ': ')
      self._string_io.write(string)
      self._string_io.write('\n')
    else:
      self._string_io.write(label, space*2*depth)
      self._string_io.write(':\n')
      for i in range(0, len(string), 60):
        self._string_io.write(string[i:i+60], space*2*(depth+1))

  def to_string(self, depth=0):
    self._write_string("CodeObject:", depth=depth)
    self._write_string("argcount: %d" % code.co_argcount, depth=depth+1)
    self._write_string("nlocals: %d" % code.co_nlocals, depth=depth+1)
    self._write_string("stacksize: %d" % code.co_stacksize, depth=depth+1)
    self._write_string("flags: %04x" % code.co_flags, depth=depth+1)
    self._write_hex_string("code", code.co_code, depth=depth+1)
    self._write_string("names %r" % code.co_names, depth=depth+1)
    self._write_string("consts:", depth=depth)
    for const in code.co_consts:
      if type(const) == types.CodeType:
        to_string(const, depth=depth+1)
      else:
        self._write_string("%r" % const, depth=depth+1)
    self._write_string("varnames %r" % code.co_varnames, depth=depth+1)
    self._write_string("freevars %r" % code.co_freevars, depth=depth+1)
    self._write_string("cellvars %r" % code.co_cellvars, depth=depth+1)
    self._write_string("filename %r" % code.co_filename, depth=depth+1)
    self._write_string("name %r" % code.co_name, depth=depth+1)
    self._write_string("firstlineno %d" % code.co_firstlineno, depth=depth+1)
    self._write_hex_string("lnotab", code.co_lnotab, depth=depth+1)
    dis.disassemble(code)

if __name__ == '__main__':
  pyc_viewer = PycViewer(sys.argv[1])
  pyc_viewer.show()
