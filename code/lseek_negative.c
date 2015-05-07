#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
	off_t curpos;
	int fd;
	errno = 0;

	fd = creat("file.holee", O_RDWR|O_CREAT);
	printf("fd==%d\n", fd);
	curpos = lseek(fd, -1, SEEK_SET);

	//printf("current position is %d\n", curpos);
	printf("error number is %d\n", errno);
	perror("lseek: ");
//	printf("error? %d\n", strerror(errno));
	return 0;
}
