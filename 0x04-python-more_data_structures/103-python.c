#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */

void print_python_list(PyObject *p)
{
	if (PyList_Check(p)) 
	{
		Py_ssize_t size = PyList_Size(p);
		Py_ssize_t allocated = ((PyListObject *)p)->allocated;
		
		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %zd\n", allocated);


	for (Py_ssize_t i = 0; i < size; i++) 
	{
		PyObject *item = PyList_GetItem(p, i);
		const char *typeName = Py_TYPE(item)->tp_name;
		
		printf("Element %zd: %s\n", i, typeName);
	}
	} 
	else
	{
		fprintf(stderr, "  [ERROR] Invalid List Object\n");
	}
}

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */

void print_python_bytes(PyObject *p)
{
	if (PyBytes_Check(p))
	{
		Py_ssize_t size = PyBytes_Size(p);
		const char *bytes = PyBytes_AsString(p);

		printf("[.] bytes object info\n");
		printf("  Size: %zd\n", size);
		printf("  Trying string: %s\n", bytes);

		printf("  first %zd bytes:", (size < 10) ? size : 10);
		for (Py_ssize_t i = 0; i < size && i < 10; i++)
		{
			printf(" %02x", (unsigned char)bytes[i]);
		}

		printf("\n");
	} else
	{
		fprintf(stderr, "  [ERROR] Invalid Bytes Object\n");
	}
}
