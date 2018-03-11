#include<stdio.h>
void main()
{
 int a,b,c,sm;
 printf("Enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
  {
   sm=b;
   if(b<c)
    sm=b;
   else
    sm=c;
  }
 else
  {
   sm=a;
   if(a<c)
    sm=a;
   else
    sm=c;
  }
 if(a==b)
  {
   printf("\n%d & %d are equal",a,b);
   if(a<c)
    sm=a;
   else
    sm=c;
  }
  if(b==c)
  {
   printf("\n%d & %d are equal",b,c);
   if(a<c)
    sm=a;
   else
    sm=c;
  }
  if(a==c)
  {
   printf("\n%d & %d are equal",a,c);
   if(b<c)
    sm=b;
   else
    sm=c;
  }
 if(a==b&&b==c)
  printf("\nall three numbers are equal");
 else
  printf("\n%d is the smallest",sm);
 }
