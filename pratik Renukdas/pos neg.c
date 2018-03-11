#include<stdio.h>
void main()
{
 int a;
  printf("Enter a number");
  scanf("%d",&a);
  if(a<0)
   printf("\n%d is a negative number",a);
  if(a>0)
   printf("\n%d is a positive number",a);
  if(a==0)
   printf("\n not positive or negative or neutral");
}
