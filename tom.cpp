#include <Python.h>

int main(int argc, char const *argv[])
{
	Py_Initialize();
	// PyEval_InitThreads() ;
	// PyEval_ReleaseThread( PyThreadState_Get() ) ;
	// PyGILState_STATE gstate;
	// gstate = PyGILState_Ensure();

	PyRun_SimpleString ("import sys; sys.path.insert(0, '/home/test/tmp/test_pymodule')");
	PyRun_SimpleString ("print sys.path");
	PyObject * pModule = NULL;
	PyObject * pFunc = NULL;
	
	pModule = PyImport_ImportModule("m_lib");
	pFunc = PyObject_GetAttrString(pModule,"test");
	if(pFunc != NULL) {
		printf("pFunc found.\n");
	    PyObject_CallObject(pFunc, NULL);
	    // PyGILState_Release(gstate);
	    Py_Finalize();
	}
	else {
	    printf("pFunc returned NULL\n");
	}
	return 0;
}