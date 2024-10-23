#include<stdio.h>

int fact(int num);

int main(){
int num, fac;

printf("Enter the number :");
scanf("%d",&num);

 fac= fact(num);
 printf("Factorial of number is %d\n",fac);

return 0;
}

int fact(int num ){
int result;

if (num==0)
return 0;
else
result=num*(num-1);
}
