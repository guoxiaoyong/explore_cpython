#pragma once
#include "object.h"

struct PyIntObject {
  PyObject_HEAD;
  int value;
};

extern PyTypeObject PyInt_Type;

PyObject* CreatePyIntObject(int value);
