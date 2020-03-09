#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFSIZE 1024

int main(int argc, char const *argv[]) {
  char buffer [BUFSIZE];
  off_t offset;
  int filedes = open("/home/nabesh/System Programming codes/me.txt", O_RDWR);
  if (filedes < 0) {
    /* code */
    printf("Failed to open file\n" );
  }else{
    offset = lseek(filedes,SEEK_CUR,SEEK_END);
    printf("The size of the file is %ld bytes\n",offset );
  }
  return 0;
}
