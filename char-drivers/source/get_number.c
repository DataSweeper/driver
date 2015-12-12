
if(scull_major)
{
	dev = MKDEV(scull_major, scull_minor);
	result = register_chrdev_region(dev, scull_nr_devs, "scull");
}
else
{
	result = alloc_chrdev_region(&dev, sull_minor, scull_nr_devs, "scull");
	scull_major = MAJOR(dev);
}
if(result < 0)
{
	printk(KERN_WARN "scull: can't get major %d\n", scull_major);
	return result;
}
	
