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

 if(a > b)
 {
   if(a > c)
          max = a;
   else
          max = c;
 }
 else
 {
   if(b > c)
          max = b;
   else
          max = c;
 }

 printf("Max = %d \n",max);
 return 0;
}
