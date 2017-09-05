obj-m += ft.o

#the porpuse of this code is show how to find the modeles for the  suitable kernel
#In this example ft.c is own code in C, but the module is not present, and the gcc get error, 
#for this reason we are created ft.o "an object"
#and with a makefile we provide the capability to run, all is neccesary because make all modules for the compilation
#clean is same necesary because anything is wrong you should type "make clean" and this part has to be Enable
#This part is a principal fail when a single user is started with LDD, refeir to  linux device driver
#this code is very usable. enjoy it.
all:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
