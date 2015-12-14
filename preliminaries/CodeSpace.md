Code Management:
---------------

Memory management is very complicated subject.

If you haven't thought about what a segfault really means, you may be surprised to hear that
pointers don't actually point to memory locations. Not real ones, anyway. When a process is
created, the kernel sets aside a portion of real physical memory and hands it to the process
to use for its executing code, variables, stack, heap and other things which a computer
scientist would know about[5]. This memory begins with 0x00000000 and extends up to whatever
it needs to be. Since the memory space for any two processes don't overlap, every process
that can access a memory address, say 0xbffff978, would be accessing a different location in
real physical memory! The processes would be accessing an index named 0xbffff978 which
points to some kind of offset into the region of memory set aside for that particular
process. For the most part, a process like our Hello, World program can't access the space
of another process, 

