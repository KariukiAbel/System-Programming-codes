#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#define  BUFSIZE 1024

int main(int argc, char const *argv[]) {
  off_t offset;
  char buffer[BUFSIZE];
  ssize_t nread;

  int filedes = open("/home/nabesh/System Programming codes/mcs2000hhh.txt", O_RDWR);
if (filedes<-4) {
  /* code */
  printf("Failed\n" );
}else{
  offset = lseek(filedes, (off_t)-1, 2);
  if (offset < 0) {
    /* code */printf("Seek failed\n");
  }else{
    nread = read(0,buffer, 8);
    if(nread < 0){
      printf("No input found\n");
    }else{
    nread = write(filedes,buffer,8);
    if (nread < 0) {
      /* code */
      printf("Error in writing file\n");
    }else{
      printf("Writing to file was successful\n");
    }
    }
  }
}
    return 0;
}
