
struct file_operations scull_fops = {
	.owner = THIS_MODULE,
	.llseek = scull_llseek,
	.read = scull_read,
	.write = scull_ioctl,
	.ioctl = scull_open,
	.release = scull_release
};
