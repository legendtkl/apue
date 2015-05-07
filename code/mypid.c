#include <sys/wait.h>
#include <stdio.h>


int main(){
	int status;
	pid_t pid = fork();

	if(pid==0)
		printf("child\n");
	printf("both\n");

	if(pid!=0)
		printf("parent\n");
	if(pid=waitpid(pid, &status, 0)<0)
		printf("waitpid error\n");
	return 0;
}
