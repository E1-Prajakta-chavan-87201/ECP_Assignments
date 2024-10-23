#include <stdio.h>
int main()
{
  int a,b,div;
  printf("Enter first number:\n");
  scanf("%d",&a);
  printf("Enter second number: \n");
  scanf("%d",&b);
  
   

  if(b==0)
  {
   
   printf("cannot divide by zero");
  }
   else
   {
   div = a/b;
   printf("div = %d\n" , div);
   }

  return 0;
  }
