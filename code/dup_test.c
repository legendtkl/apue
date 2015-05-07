#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
	int fd1,fd2,res1,res2;

	fd1 = open("1", O_RDWR);

	fd2 = dup(fd1);

	printf("fd1==%d, fd2==%d\n", fd1, fd2);

	res1=write(fd1, "legend", 5);
	res2=write(fd2, "tkl", 5);

	printf("write buffer: %d, %d\n", res1, res2);

	return 0;
}

