#include<stdio.h>
#include<unistd.h>

void palindrome(){
   int n,r,temp,sum=0;
   printf("Enter a number:");
   scanf("%d", &n);
   temp = n;
   while(n>0){
      r = n%10;
      sum = (sum*10) + r;
      n = n/10;
   }
   n = temp;
   if(n == sum){
      printf("Palindrome.");
   }
   else{
      printf("Not Palindrome.");
   }
}

int main(){
  int pid;
  pid = fork();
  if(pid==0)
  printf("I am child process.");
  palindrome();

  return 0;
}
