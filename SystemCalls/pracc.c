#include<stdio.h>
int main(){

  int bt[20],wt[20],tat[20],p[20],i,j,n,total=0,pos,temp;
  float avg_wt, avg_tat;
  
  printf("Enter number of Processes:");
  scanf("%d", &n);
  
  printf("\nEnter the burst time:\n");
  for(i=0; i<n; i++){
     printf("P%d:",i+1);
     scanf("%d", &bt[i]);
  }

  for(i = 0; i<n; i++){
     pos = i;
     for(j=0;j<n;j++){
        if(bt[j]<bt[pos]){
           pos = j;
        }
     }
     temp = bt[i];
     bt[i] = bt[pos];
     bt[pos] = temp;
  
     temp = p[i];
     p[i] = p[pos];
     p[pos] = temp;
  }
  
  wt[0] = 0;
  for(i =1; i<n; i++){
     wt[i]=0;
     for(j=0; j<n;j++){
        wt[i] = wt[i] + bt[j];   
     }
     total = total + wt[i];
  }
  
   
   avg_wt = (float)total/(float)n;
   total = 0;
   
   printf("\nProcesses  Burst   Waiting Turn around\n");
   for(i = 0; i<n; i++){
      tat[i] = bt[i] + wt[i];
      total = total + tat[i];
      printf(" %d\t %d\t\t %d \t%d\n",i+1,bt[i],wt[i],tat[i]);
   
   }
  avg_tat = (float)total/(float)n;
  
  printf("\n\nAVG WT = %f",avg_wt);
  printf("\nAVG TAT = %f",avg_tat);
  

  return 0;
}
