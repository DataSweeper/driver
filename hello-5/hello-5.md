Passing Command Line Arguments to a Module
------------------------------------------

	Modules can take command line arguments, 

he module_param() macro takes 3 arguments: the name of the variable, its type and
permissions for the corresponding file in sysfs. Integer types can be signed as usual or
unsigned. If you'd like to use arrays of integers or strings see module_param_array() and
module_param_string().

	int myint = 3;
	module_param(myint, int, 0);


