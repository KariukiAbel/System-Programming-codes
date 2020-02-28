#include <unistd.h>
#include <fnctl.h>
#include <stdio.h>

int main(){
ssize nread;
#define BUFSIZE 512;
char *buffer[BUFSIZE];
int filedes = open("/Desktop/mcs3.txt", O_RDONLY);

if(filedes < 0){
	printf("failure");
	exit(1);
}
else{
	nread = read(filedes, buffer, 12)
		if(nread <0){
			printf("read failed");
		}else{
			printf("%s", buffer);
		}
}
return 0;
}

