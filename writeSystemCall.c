#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define  BUFSIZE 1024
int main(int argc, char const *argv[]) {
  int filedes1, filedes2;
  char buffer[BUFSIZE];
  ssize_t nread, nread2;
  filedes1 = open("/home/nabesh/System Programming codes/mcs3.c",O_RDWR);
  if (filedes1 < 0) {
    /* code */
    printf("File not found or unsuccessful openning\n");
  }else{
    nread = read(filedes1, buffer, 600);
    if (nread < 0) {
      /* code */
      printf("Reading failed\n");
    } else{
      filedes2 = open("/home/nabesh/System Programming codes/me.txt",
    O_WRONLY);
    nread2 = write(filedes2, buffer, 600);
    if (nread2<0) {
      /* code */
      printf("Writing failed\n");
    }else{
      printf("Writing successful\n");
    }
    }
  }
  return 0;
}
