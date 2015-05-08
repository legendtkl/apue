#include <unistd.h>
#include <stdio.h>

int main(){
	char *buf;

	buf = getcwd(buf, 80);
	printf("%s\n", buf);

	return 0;
}
