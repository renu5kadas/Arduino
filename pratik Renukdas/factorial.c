#include<stdio.h>
void main()
{
  long a,i,b;
  printf("Enter a number");
  scanf("%ld",&a);
  b=1;
  for(i=2;i<a+1;i++)
  {
      b=b*i;
  }
  printf("\nThe factorial of %ld is %ld",a,b);
}
