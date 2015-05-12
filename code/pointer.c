#include <stdio.h>

int foo(int val){
	int *ptr;
	if(val==0){
		int val;
		val = 5;
		ptr = &val;
	}
	return (*ptr+1);
}

int main(){
	printf("%d\n", foo(0));
	return 0;
}
