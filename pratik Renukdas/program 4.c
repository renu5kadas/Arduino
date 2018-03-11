#include<stdio.h>
int main()
{
 double firstnumber,secondnumber,productoftwonumbers;
 printf("Enter two numbers:");
 scanf("%lf %lf",&firstnumber,&secondnumber);
 productoftwonumbers=firstnumber*secondnumber;
 printf("\nProduct = %.2lf",productoftwonumbers);
 return 0;
}
