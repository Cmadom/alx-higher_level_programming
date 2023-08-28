/**
 * File: 103-python.c
 * Auth: Clifford M. Adom
 */

#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 */

void print_python_list(PyObject *p)
{
	if (!PyList_Check(p))
	{
		printf("Invalid PyListObject\n");
		return;
	}
	Py_ssize_t size = PyList_Size(p);

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
}

/**
 * print_python_bytes - Prints basic info about Python byte objects.
 * @p: A PyObject byte object.
 */

void print_python_bytes(PyObject *p)
{
	if (!PyBytes_Check(p))
	{
		printf("Invalid PyBytesObject\n");
		return;
	}
	printf("[.] bytes object info\n");
	printf("  size: %ld\n", ((PyVarObject *)p)->ob_size);
	printf("  trying string: %s\n", ((PyBytesObject *)p)->ob_sval);
	printf("  first %ld bytes:", ((PyVarObject *)p)->ob_size < 10 ?
			((PyVarObject *)p)->ob_size : 10);
	for (Py_ssize_t i = 0; i < (((PyVarObject *)p)->ob_size < 10 ?
				((PyVarObject *)p)->ob_size : 10); ++i)
		printf(" %02x", (unsigned char)((PyBytesObject *)p)->ob_sval[i]);
	printf("\n");
}

/**
 * print_python_float - Prints basic info about Python float objects.
 * @p: A PyObject float object.
 */

void print_python_float(PyObject *p)
{
	if (!PyFloat_Check(p))
	{
		printf("Invalid PyFloatObject\n");
		return;
	}
	double value = ((PyFloatObject *)p)->ob_fval;

	printf("[.] float object info\n");
	printf("  value: %lf\n", value);
}
