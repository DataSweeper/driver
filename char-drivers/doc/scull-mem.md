The region of memory used by the scull is called the device.

The scull driver introduces two core functions used to manage memory in the Linux kernel. These functions, defined in <linux/slab.h>, are:

void *kmalloc(size_t size, int flags);
void kfree(void *ptr);


