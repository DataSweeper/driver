
obj-m += usb_led.o

all:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	make -C ~/linux-stable M=`pwd` modules
clean:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	make -C ~/linux-stable M=`pwd` clean
