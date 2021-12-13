#include<stdio.h>
#include<unistd.h>

int main(){
  int n,temp,r,sum=0;
  printf("Enter the number:");
  scanf("%d", &n);
  temp = n;
  
  while(n>0){
     r = n%10;
     sum = (sum*10) + r;
     n = n/10;
  }
  
  n = temp;
  
  if(n == sum){
     printf("Given number is Palindrome.");  
  }
  else{
     printf("Not Palindrome.");
  }
}
