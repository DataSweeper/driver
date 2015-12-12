Char Drivers:
------------
  Char drivers are easier to understand then block driver or network drivers. Goal is writer
Modularized char driver. scull (Simple Character Utility for loading Localities). Scull is
not hardware dependtent. scull just acts on some memory, allocated from the kernel. Anyone
can compile and run scull, and Acull  is portable across the computer architectures on which
linux runs. the scull doesnot do anything usefull other than demonstrate the interface b/w
kernel and the char drivers and allow the user to run some tests

Titles:

	The Design of the scull --> doc/scull-design.md
	Major and Minor Numbers --> doc/MajMin-number.md
		The Inerna Representation of Device number
		Allocating and Freeing Device Number
		Dynamic allocation of major number
	Some Important Data Structures --> doc/imp-data-struct.md
		File Operations
		The file Structure
		The Inode Structure
	Char Device Registration --> doc/device-reg.md
		Device Registration in scull
		The older way
	Open and release --> doc/open-release.md
		The open Method
		The release method
	Sculls Memery Usage --> doc/scull-mem.md
	Read and write --> doc/read-write.md
		The read method
		The write method
		readv and writev
	Playing with new Devices --> doc/play.md
	Quick Reference

