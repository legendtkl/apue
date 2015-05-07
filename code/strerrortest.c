#include <string.h>
#include <stdio.h>

int main(){
	int i=0;
	for(; i<15; i++)
		printf("%s\n", strerror(i));

	return 0;
}
