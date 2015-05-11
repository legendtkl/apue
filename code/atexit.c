#include <stdio.h>
#include <stdlib.h>

static void my_exit1();
static void my_exit2();

int main(){
	if(atexit(my_exit1) != 0)
		printf("can't register my_exit1\n");
	if(atexit(my_exit2) != 0)
		printf("can't register my_exit2\n");
	if(atexit(my_exit1) != 0)
		printf("can't register my_exit1\n");

	printf("main is done\n");
	return 0;
}

static void my_exit1(){
	printf("first exit handler\n");
}

static void my_exit2(){
	printf("second exit handler\n");
}
