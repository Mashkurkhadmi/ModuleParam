#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
MODULE_AUTHOR("Mashkur A Khadmi");
MODULE_VERSION("V1.1");
MODULE_LICENSE("GPL");
static int count=0;
static int param=0;
//module_param();
module_param(param, int,0);
MODULE_PARM_DESC(param,"this is command line variable");
static int param_init(void)
{
	printk("Module param Driver\n");
	printk("Param %d\n",param);
	printk("Count %d\n",count);
	return 0;
}

static void param_exit(void)
{
	printk("First Exited\n");
}
module_init(param_init);
module_exit(param_exit);
MODULE_DESCRIPTION("Passing commmand line argiment");
