#define MODULE
#include<linux/modules.builtin>
int init_module(void) {
printk("<1> Hola USB3300\n");
return 0;
}
void cleanup_module(void) {
printk("<1> SIN SERVIR PUTO\n");
