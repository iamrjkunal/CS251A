#include<stdio.h>

void microkernel_sendmsg(char *);

void main(){
	printf("Helloworld!\n");
	microkernel_sendmsg("is moreportable");
}

void microkernel_sendmsg(char *a){
	printf("microkernel: %s\n", a);
}
