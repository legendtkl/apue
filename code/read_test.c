#include <fcntl.h>
#include <stdio.h>

int main(){
	int fd = open("1", 0);
	char buf[10];
	int res;

	while(res=read(fd, buf, 10)!=0){
		if(res==-1){
			printf("read error");
			break;
		}

		printf("%s\n", buf);
	}
	close(fd);
	return 0;
}
