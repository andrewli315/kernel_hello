#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("DUAL BSD/GPL");

static int __init create_hello(void)
{
	printk(KERN_ALERT "HELLO!\n");
	return 0;
}
static void __exit cleanup_hello(void)
{
	printk(KERN_ALERT "GOODBYTE!\n");
}

module_init(create_hello);
module_exit(cleanup_hello);
