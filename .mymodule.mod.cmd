savedcmd_/home/ubuntu/kernel_drivers/mymodule.mod := printf '%s\n'   mymodule.o | awk '!x[$$0]++ { print("/home/ubuntu/kernel_drivers/"$$0) }' > /home/ubuntu/kernel_drivers/mymodule.mod
