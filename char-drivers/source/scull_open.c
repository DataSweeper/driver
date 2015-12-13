int scull_open(struct inode *inode, struct
file *filp)
{
	struct scull_dev *dev;
	
	dev = container_of(inode->i_cdev,
struct scull_dev, cdev);
	filp->private_data = data;

	/* node trim to 0 the length of the
 * device if open was write-only */
	
	if ( (filp->f_flags & 0_ACCMODE) ==
0_WRONLY)
	{
		scull_trim(dev);
	}
	return 0;
}

