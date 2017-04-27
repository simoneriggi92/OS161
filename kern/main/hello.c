#include <types.h>
#include <kern/errno.h>
#include <kern/reboot.h>
#include <kern/unistd.h>
#include <lib.h>
#include <spl.h>
#include <clock.h>
#include <thread.h>
#include <proc.h>
#include <current.h>
#include <synch.h>
#include <vm.h>
#include <mainbus.h>
#include <vfs.h>
#include <device.h>
#include <syscall.h>
#include <test.h>
#include <version.h>
#include "autoconf.h"  // for pseudoconfig
//#include <opt-thread.h>
 /*
#if OPT_HELLO
void hello (void);
#endif

void hello (void){

kprintf("\n HELLO!\n");

}
*/

#if OPT_THREAD
void hello(void);
#endif

void hello(void){

kprintf("\nCiao Simone!\n");

}
