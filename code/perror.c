#include <stdio.h>
#include <errno.h>

int main(){
	errno = EACCES;
	perror("haha");

	return 0;
}
