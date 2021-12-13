#include<stdio.h>
#include<unistd.h>
#define max 20

int main(){
  int n, esum = 0, osum =0;
  int arr[max];
  printf("Enter the number of elements in Array:");
  scanf("%d", &n);
  printf("\nEnter the values:");
  for(int i=0; i<n; i++){
     scanf("%d", &arr[i]);
  }
  pid_t pid = fork();
  for(int i= 0; i<n; i++){
     if(arr[i]%2 == 0 && pid != 0){
        esum = esum + arr[i];
     }
     else if(arr[i]%2 != 0 && pid == 0){
        osum = osum + arr[i];
     }
  }
  if(pid == 0){
     printf("\nSum of odd nos.: %d",osum);
  }
  else{
     printf("\nSum of even nos.: %d",esum);
  }
  
  return 0;
}
