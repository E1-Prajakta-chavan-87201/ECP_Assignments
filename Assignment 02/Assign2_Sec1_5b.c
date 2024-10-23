#include<stdio.h>

int main()
{
int a,b,c,max;
 printf("Enter a: \n");
 scanf("%d",&a);
 printf("Enter b: \n");
 scanf("%d",&b);
 printf("Enter c: \n");
 scanf("%d", &c);

 (a > b && a > c) ? printf("a is greater \n") : (b > a && b > c) ? printf("b is greater \n") : ("c is greater \n");

 return 0;
}
