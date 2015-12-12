Some Important Data Structures
-------------------------------
	file_operations
	file
	inode

	File Opeartion:
		Connection of device number to device operation is called file_operations.
file_operation structure defined in (<linux/fs.h>).

file_operations
	collections of function pointer. Each open file is associated with its own set of
funcitons. 

The File Structure:
	
	struct file, defined in (<linux/fs.h>)

	second most important data structure

The inode Structure:
	
	dev_t i_rdev;
		For inodes that represent device files, this field contains  actual device number.

	struct cdev *i_cdev;
		struct cdev is the kernel's internal structure thar represents char devices;


