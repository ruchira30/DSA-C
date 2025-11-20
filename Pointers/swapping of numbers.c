#include<stdio.h>
void swap();
int main()
{
 int x,y;
 printf("enter value of x :");
 scanf("%d",&x);
 printf("enter value of y:");
 scanf("%d",&y);
 swap(&x,&y);
 printf("Values after swapping x =%d and y=%d",x,y);
 return 0;
 }
 void swap(int*x,int*y)
 {
 int temp;
 temp =*x;
 *x =*y;
 *y = temp;
 }
