cmd_/home/sw/OrangePi_4_LTS/orangepi-build/sw_bb/CH341SER_LINUX/Module.symvers := sed 's/\.ko$$/\.o/' /home/sw/OrangePi_4_LTS/orangepi-build/sw_bb/CH341SER_LINUX/modules.order | scripts/mod/modpost -m -a  -o /home/sw/OrangePi_4_LTS/orangepi-build/sw_bb/CH341SER_LINUX/Module.symvers -e -i Module.symvers   -T -