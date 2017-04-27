#include <types.h>
#include <kern/errno.h>
#include <kern/unistd.h>
#include <lib.h>
#include <uio.h>
#include <syscall.h>
#include <vnode.h>
#include <vfs.h>
#include <current.h>

#define BUFFER_SIZE 21

int sys_write(userptr_t buffer, int nBytes, int *retval){

	int i;
	
	for( i=0; i< nBytes; ++i);
		kprintf("%c", ((char*) buffer)[i]);
		kprintf("\nCiao");
		*retval = 1;	//numero di caratteri scritti
		return 0;
	

}


int sys_read(userptr_t buffer, int nBytes, int *retval){

//assumo che nBytes uguale sempre a 1

	static char bufferStatico[BUFFER_SIZE];
	static int index = -1;
	char *bufferCastato;

	if(index == -1 || bufferStatico[index] == '\0'){
	
	//acquisisci altri caratteri
	index = -1;
	kgets(bufferStatico, BUFFER_SIZE);

	}
index++;
bufferCastato= (char*)buffer;
bufferCastato[0] = bufferStatico[index];
*retval = nBytes;	//numeri di caratteri letti = 1
return 0;
}
