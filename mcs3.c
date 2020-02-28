#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFSIZE 512
int main(){
ssize_t nread;
char* buffer[BUFSIZE];
int filedes = open("/Desktop/mcs3.txt", O_RDONLY);

if(filedes < 0){
	printf("failure\n");
	exit(1);
}
else{
	nread = read(filedes, buffer, 12);
		if(nread <0){
			printf("read failed\n");
		}else{
			// printf("%s", buffer);
			printf("Reading successful\n");
		}
}
}
