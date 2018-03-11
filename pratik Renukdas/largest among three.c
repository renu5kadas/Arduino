#include<stdio.h>
void main()
{
 int a,b,c,lg;
 printf("Enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
  {
   lg=a;
   if(a>c)
    lg=a;
   else
    lg=c;
  }
 else
  {
   lg=b;
   if(b>c)
    lg=b;
   else
    lg=c;
  }
 if(a==b)
  {
   printf("\n%d & %d are equal",a,b);
   if(a>c)
    lg=a;
   else
    lg=c;
  }
  if(b==c)
  {
   printf("\n%d & %d are equal",b,c);
   if(a>c)
    lg=a;
   else
    lg=a;
  }
  if(a==c)
  {
   printf("\n%d & %d are equal",a,c);
   if(b>c)
    lg=b;
   else
    lg=c;
  }
 if(a==b&&b==c)
  printf("\nall three numbers are equal");
 else
  printf("\n%d is the largest",lg);
 }
