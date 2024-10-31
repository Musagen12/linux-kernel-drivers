#include <linux/module.h> /* For dynamic loading modules into the kernel */
#include <linux/init.h>  /* For module initialization and cleanup */

/* Metat Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Musagen12");
MODULE_DESCRIPTION("A hello world module");

/*  The function is called when the module is loaded init the kernel */
static int __init ModuleInit(void) {
	printk("Hello kernel. \n");
	return 0;
}

/* The function is called when the module is removed from the kernel */
static void __exit ModuleExit(void) {
	printk("Goodbye kernel.");
}

module_init(ModuleInit);
module_exit(ModuleExit);
