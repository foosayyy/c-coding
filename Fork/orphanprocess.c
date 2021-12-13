#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
  pid_t pid;
  pid = fork();
  
  if(pid == 0){
     printf("I am a Child. My PID is = %d and PPID is = %d",getpid(),getppid());
  }
  else{
     printf("\nI am a Parent. My child PID is = %d and PID is = %d",pid,getpid());
  }
  
  printf("\nTerminating PID = %d",getpid());

  return 0;
}
