#include<stdio.h>
int main()
 {
     int sum = 0,i,n;
     float avg; ;
     int marks[100];
     //Find average of 30 students
     printf ("Enter marks of 30 students:" ) ;
     for(i=0;i<n;i++)
     {
         scanf("%d",&marks[i]);
         sum=sum+marks[i];
     }
     avg = sum/30 ;
     printf("Average marks = %0.2f", avg);
     return 0;
 }





