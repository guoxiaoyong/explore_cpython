#pragma once
#include "object.h"

struct PyStrObject {
  PyObject_HEAD;
  char value[50];
};

extern PyTypeObject PyStr_Type;

PyObject* CreatePyStrObject(const char* value);
