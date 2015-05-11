#include <stdio.h>

int main(int argc, char *argv[]){
	int i=1;

	for(; i<4; i++){
		FILE *fp = fopen(argv[i], "r+b");

		printf("%d\n", fileno(fp));
	}
	return 0;
}
