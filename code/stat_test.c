#include <sys/stat.h>
#include <stdio.h>


int main(){
	struct stat buf;
	int ret = stat("1", &buf);

	if(ret==-1){
		perror("stat: ");
	}else{
		printf("%d\n", buf.st_mode);
	}

	return 0;
}
