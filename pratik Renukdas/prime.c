#include<stdio.h>
void main()
{
 int a,i;
 printf("Enter a number");
 scanf("%d",&a);
 for(i=a-1;i>1;i--)
 {
  if(a%i==0)
   { printf("\n The number is not prime");
     break;
   }
 }
 if(i==1)
  printf("\n no. is prime");
}
