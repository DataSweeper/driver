int scull_trim(struct scull_dev *dev)
{
	struct scull_qset *next, *dptr;
	int qset = dev->qset;	/* "dev" is not empty */
	int i;
	
	for (dptr = dev->data; dptr; dptr = next)
	{
		if (dptr->data)
		{
			for (i =0; i < qset; i++)
				kfree(dptr->data[i]);
			kfree(dptr->data);
			dptr->data = NULL;
		}
		next = dptr->next;
		kfree(dptr);
	}
	dev->size = 0;
	dev->quantom = scull_quantum;
	dev->qset = scull_qset;
	dev->data = NULL;
	return 0;
}

