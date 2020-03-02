#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#define  BUFSIZE 1024

int main(int argc, char const *argv[]) {
  int filedes, filedes2;
  off_t offset;
  char buffer[BUFSIZE];
  ssize_t nread,nread2;

  filedes = open("/home/nabesh/System Programming codes/text.txt", O_RDONLY);
if (filedes < 0) {
  /* code */
  printf("Openning failed!\n");
}else{
  offset = lseek(filedes, (off_t)-20, 2);
  if (offset < 0) {
    /* code */
    printf("Seek failed\n");
  }else{
    nread = read(filedes, buffer, 20);
    if (nread < 0) {
      /* code */
      printf("Reading failed\n");
    }else{
      filedes2 = open("/home/nabesh/System Programming codes/mcs101.txt", O_WRONLY);
      if (filedes2 < 0) {
        /* code */
        printf("Opening of file 2 failed\n");
      }else{
        nread2 = write(filedes2, buffer, 20);
        if (nread2 < 0) {
          /* code */
          printf("Writing failed\n");
        }else{
          printf("Writing successful\n" );
        }
      }
    }
  }
}
  return 0;
}
