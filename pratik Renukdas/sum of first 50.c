#include<stdio.h>
void main()
{
 int i,sum=0;
 for(i=1;i<=50;i++)
 {
     printf("+%d",i);
     sum=sum+i;
 }
 printf("\nThe sum of first 50 numbers is %d",sum);
}
