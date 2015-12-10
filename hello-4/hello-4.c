/*
 * hello-4.c - Demonstrates module documentation
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Siva Gnanam <datasweeper@outlook.com>"
#define DRIVER_DESC	"A sample driver."

static int __init init_hello_4(void)
{
	printk(KERN_INFO "Getting started 4\n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO "Getting started bey\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/*
 * You can use strings, like this:
 */

/*
 * Get rid of traint message by declaring code as GPL.
 */
MODULE_LICENSE("GPL");

/*
 * Or with defines, like this:
 */
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

/*
 * This module uses /dev/testdevice. The MODULE_SUPPERTED_DEVICE macro
 * might be used in the future to help automatic configuration of
 * modules, but is currently unused other then for documentation
 * purpose.
 */
MODULE_SUPPORTED_DEVICE("testdevice");
