**
 * @file    primerdriver.c
 * @author  héctor méndez
 * @date    5 sept 2017
 * @version 0.1
*/
 
#include <linux/init.h>             // heaters created for mark init, exit, basic functions
#include <linux/module.h>           // Nucleo de cabeceras del kernel
#include <linux/kernel.h>           // Contenido de los nucleos operables del nucleo, si aśi, repetido
 
MODULE_LICENSE("GPLv3");
MODULE_AUTHOR("Héctor Méndez");
MODULE_DESCRIPTION("A simple Linux driver.");
MODULE_VERSION("0.1");
 
static char *name = "vanf";
module_param(name, charp, S_IRUGO); ///, S_IRUGO read/not changed
MODULE_PARM_DESC(name, "The name to display in /var/log/kern.log");  ///< parameter description

static int __init primerdriverBBB_init(void){
   printk(KERN_INFO "primer driver putitos\n", name);
   return 0;
}
 
/** @brief The LKM cleanup function
 *  Similar to the initialization function, it is static. The __exit macro notifies that if this
 *  code is used for a built-in driver (not a LKM) that this function is not required.
 */
static void __exit helloBBB_exit(void){
   printk(KERN_INFO "EBB: Goodbye %s from the BBB LKM!\n", name);
}
 
/** @brief A module must use the module_init() module_exit() macros from linux/init.h, which
 *  identify the initialization function at insertion time and the cleanup function (as
 *  listed above)
 */
module_init(helloBBB_init);
module_exit(helloBBB_exit);


