#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("usage: ./mycp oldfile newfile\n");
		return 0;
	}

	int fd = open(argv[1], O_RDWR);
	int cpfd = open(argv[2], O_CREAT | O_RDWR);

	if(fd==-1 || cpfd==-1){
		perror("mycp: ");
		return -1;
	}

	char *buf;
	while(read(fd, buf, 1)!=0){
		write(cpfd, buf, 1);
//		if(buf[0]!='\0'){
//			write(cpfd, buf, 1);
//		}else
//			lseek(cpfd, 1, SEEK_CUR);
	}

	close(fd);
	close(cpfd);
	return 0;
}
