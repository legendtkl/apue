#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(){
	
	printf("uid=%d, gid=%d\n", getuid(), getgid());
	return 0;
}
