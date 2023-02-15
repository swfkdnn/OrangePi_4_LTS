#export CROSS_COMPILE=/home/sw/OrangePi_4_LTS/orangepi-build/toolchains/gcc-arm-9.2-2019.12-x86_64-aarch64-none-linux-gnu/bin/aarch64-none-linux-gnu-

$(warning sw_debug: --------CH34X---------)

ifeq ($(KERNELRELEASE), )
#a= $(shell export PATH=PATH:/home/sw/OrangePi_4_LTS/orangepi-build/kernel/orange-pi-5.18/include)
#KERNELDIR := /home/sw/OrangePi_4_LTS/orangepi-build/kernel/orange-pi-5.18
KERNELDIR := /home/sw/OrangePi_4_LTS/orangepi-build/kernel/orange-pi-5.18/debian/hdrtmp/usr/src/linux-headers-5.18.5-rk3399

PWD :=$(shell pwd)
default:
	$(warning sw_debug: --------default---------)
#	$(warning sw_debug: --------PATH = $(PATH)---------)
	$(MAKE) -C $(KERNELDIR)  M=$(PWD)  modules
clean:
	rm -rf .tmp_versions Module.symvers *.mod.c *.o *.ko .*.cmd Module.markers modules.order
load:
	modprobe usbserial
	insmod ch34x.ko
unload:
	rmmod ch34x
else
$(warning sw_debug: -------else---------)
obj-m := ch34x.o

endif
