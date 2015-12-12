The design of scull
------------------
	The first step of driver writing is defining the capabilities
the driver will offer to user programs. Since our "device" is part of
the computer memory,

	To make scull useful as a template for writing real drivers for real devices, we
will show you several device abrtaction on top of the computer memory, earch with different
personality.
	
	The sucll source implements the following deivices, Each kind of device implemented
by the module is refered to as a type.

scull0 to scull3
	Four devices, If the device is opened mutiple times, the contained within the
device is shared by all the file descriptors that opened it.

scullpipe0 to sullpipe3
	Four FIFO (first-in-first-out) devices, which act like pipes. One process reads what
another process writes. If mutiple read the samedevice, they content for data. The internals
of scullpipe will show how blocking.

scullsingle
scullpriv
sculluid
scullwuid
	
	These are similar to scll0 but with some limitations on when an opens is permitted.

 
