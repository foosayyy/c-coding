#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(){
  pid_t pid;
  pid = fork();
  
  if(pid == 0){
     printf("\nChild process ID = %d Parent process ID = %d",getpid(),getppid());   
  }
  else if(pid > 0){
     sleep(60);
     printf("\nParent process ID = %d GrandParent process ID = %d",getpid(),getppid());
  }
  else{
     printf("Process not created.");
  }

  return 0;
}
