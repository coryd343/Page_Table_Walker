#include<linux/module.h>

int proc_init (void) {
  printk(KERN_INFO "hw3: kernel module initialized\n");
  return 0;
}

void proc_cleanup(void) {
  printk(KERN_INFO "hw3: performing cleanup of module\n");
}

MODULE_LICENSE("GPL");
module_init(proc_init);
module_exit(proc_cleanup);
