#include "stdio.h"
#include "sys/types.h"
#include "unistd.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
pid_t pid = fork();
if (pid > 0) {
  /* code */
  printf("I am a parent\n");
  printf("My pid is %d\n",pid );
}else{
  printf("I am a child\n");
  printf("My pid is %d\n",pid );
}
  return 0;
}
