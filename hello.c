#include<stdio.h>

void microkernel_sendmsg(char *);
void microkernel_getmsg(char *);
 
void main(){
	printf("Helloworld!\n");
	printf("This must be a monolithicdesign\n");
 	microkernel_sendmsg("is more portable");
}

void microkernel_sendmsg(char *a){
 	printf("microkernel: %s\n", a);
}
 
void microkernel_getmsg(char *b){
 //TODO: getmsg feature
}
