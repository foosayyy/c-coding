#include<stdio.h>

int main(){
  int n;
  printf("Enter the number of elements to be sorted:");
  scanf("%d", &n);
  int a[n],i,j,temp;
  printf("Enter the array to be sorted:");
  for(i = 0; i<n; i++){
     scanf("%d", &a[i]);
  }   
  for(i=0; i<n; i++){
     for(j=i+1; j<n; j++){
        if(a[i]>a[j]){
           temp = a[i];
           a[i] = a[j];
           a[j] = temp;     
        }
     }
  }
  printf("\nAscending Order:");
  for(j=0; j<n; j++){
     printf(" %d", a[j]);
  }
  return 0;
}
