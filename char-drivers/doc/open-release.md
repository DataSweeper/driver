Open and release:
----------------
	* Check for device-specific errors (device not ready)
	* Initialize the device if it is being opened for the first time
	* update the f_op pointer, if necessary
	* Allocate and fill any data structure to be put in filp->private_data

	
The release method
------------------
	
	Deallocate anything that open allocated in filp->private_data
  	
	Shut down the device on last close
