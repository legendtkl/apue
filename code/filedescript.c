#include <fcntl.h>
#include <stdio.h>

int main(){
	int fd1,fd2;

	fd1 = open("1", 0);
	printf("fd1==%d\n", fd1);

	close(fd1);

	fd2 = open("2", 0);
	printf("fd2==%d\n", fd2);

//	printf("fd1==%d, fd2==%d\n", fd1, fd2);

	return 0;
}
