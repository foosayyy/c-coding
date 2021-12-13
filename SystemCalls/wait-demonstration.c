#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(){
  int status;
  pid_t pid;
  pid = fork();
  if(pid == 0){
     printf("\nI am a child.");
     exit(0);
  }
  else{
     wait(&status);
     printf("\nI am a parent.");
     printf("\nThe child PID: %d",pid);
  }
  return 0;
}
