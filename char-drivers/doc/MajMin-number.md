Major and Minor Numbers
-----------------------
	Char devices are accessed through names in the filesystem. Those names are called
special files or device files or simply node of the filesytem tree,

located under /dev

Special files for char drivers are identified by a "c"

Blocal devices identified by "b"

The internal representation of device numbers

	The dev_t type is used to hold device numbers (<linux/types.h>)
	dev_t is 32 bit 12 for majar 20 for minor.
	macros to use (<linux/kdev_t.h)

  	MAJOR(dev_t dev);
	MINOR(dev_t dev);
	OR
	MKDEV(int major, int minor);

Allocating and freeing device numbers
	getting the device number to work with
	register_chdev_region --> (<linux/fs.h>)

	int register_chrdev_region(dev_t first, unsigned int count, char *name);

	first = begining device number of the range we would like to allocate.
	count = total number of contiguous device numbers you are requesting.
	name = name of the device.

dynamic divice number allocation
	
	int alloc_chrdev_region(dev_t *dev, unsigned int firstminor, unsinged int count,
char *name);

	The device number freed with
	
	void unregister_chrdev_region(dev_t first, unsigned int count);

The above funciton allocate device numbers for your drivers use, but they do not tell the
kernel anything about what you will actully do with those numbers.

	user-space program can access one of the device numbers.


