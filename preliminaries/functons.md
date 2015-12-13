Functions available to modules:
------------------------------
	programmer use functions they dont define all the time. 
	User programs uses the library function that will be defined at linking stage. for
example printf function in user program are part of libc (stanterd c library).

Library functions:
	library functions runs completly in user space provide convinient interface to the
programer to the functions do the real work.

System calls:
	On the other hand system calls runs completly in kernel mode and are provided by the
kernel itself.

	The library function printf() may look like a very general printing function, but all it
really does is format the data into strings and write the string data using the low-level
system call write(), which then sends the data to standard output.


