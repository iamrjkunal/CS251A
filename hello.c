#include<stdio.h>

void main(){
	printf("Helloworld!\n");
	printf("This must be a monolithic design\n");
	microkernel_sendmsg("is moreportable");
}

void microkernel_sendmsg(char *a){
	printf("microkernel: %s\n", a);
}

