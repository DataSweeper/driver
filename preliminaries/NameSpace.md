When you write a small C program, you use variables which are convenient and make sense to
the reader. If, on the other hand, you're writing routines which will be part of a bigger
problem, any global variables you have are part of a community of other peoples' global
variables; some of the variable names can clash. When a program has lots of global variables
which aren't meaningful enough to be distinguished, you get namespace pollution. In large
projects, effort must be made to remember reserved names, and to find ways to develop a
scheme for naming unique variable names and symbols.

When writing kernel code, even the smallest module will be linked against the entire kernel,
so this is definitely an issue. The best way to deal with this is to declare all your
variables as static and to use a well-defined prefix for your symbols. By convention, all
kernel prefixes are lowercase. If you don't want to declare everything as static, another
option is to declare a symbol table and register it with a kernel. We'll get to this later.

The file /proc/kallsyms holds all the symbols that the kernel knows about and which are
therefore accessible to your modules since they share the kernel's codespace.

