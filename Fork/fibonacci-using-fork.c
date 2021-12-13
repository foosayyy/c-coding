#include<stdio.h>
#include<unistd.h>

void fibonacci(){
  int n1=0,n2=1,n3,n;
  printf("Enter the number of elements:");
  scanf("%d", &n);
  printf("%d %d",n1,n2);
  
  for(int i=2; i<n; i++){
     n3 = n1 + n2;
     printf(" %d",n3);
     n1 = n2;
     n2 = n3;
  }
}

int main(){
  int pid;
  pid = fork();
  if(pid == 0)
  printf("Child is printing the fibonacci series:\n");
  fibonacci();
  

  return 0;
}
