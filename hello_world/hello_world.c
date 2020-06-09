/*
 * @Author: dong.zhili
 * @Date: 1970-01-01 08:00:00
 * @LastEditors: dong.zhili
 * @LastEditTime: 2020-06-09 07:59:12
 * @Description: LKM驱动程序
 */ 
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

//设置初始化入口函数
static int __init hello_world_init(void)
{
    printk(KERN_DEBUG "hello world!!!\n");
    return 0;
}

//设置出口函数
static void __exit hello_world_exit(void)
{
    printk(KERN_DEBUG "goodbye world!!!\n");
}

//将上述定义的init()和exit()函数定义为模块入口/出口函数
module_init(hello_world_init);
module_exit(hello_world_exit);

//指定license版本
MODULE_LICENSE("GPL");
