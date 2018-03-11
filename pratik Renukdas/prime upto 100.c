#include<stdio.h>
void main()
{
 int a=2,i;
 printf("The prime numbers from 1 to 100 are");
 while(a<=100)
 {
  for(i=a-1;i>1;i--)
  {
   if(a%i==0)
    {
      break;
    }
  }
  if(i==1)
   printf("\n %d ",a);
  a++;
 }
}
