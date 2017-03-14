#pragma once

struct PyTypeObject;

#define PyObject_HEAD \
  int refCount;\
  PyTypeObject *type

#define PyObject_HEAD_INIT(typePtr)\
  0, typePtr

struct PyObject {
  PyObject_HEAD;
};

typedef void (*PrintFun)(PyObject* object);
typedef PyObject* (*AddFun)(PyObject* left, PyObject* right);

struct PyTypeObject {
  PyObject_HEAD;
  const char* name;
  PrintFun print;
  AddFun add;
};

extern PyTypeObject PyType_Type;
