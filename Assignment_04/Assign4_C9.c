#include<stdio.h>

int calculate (int num1, int num2, int *pdiff,int  *pmul,int *pdiv)
{
*pdiv=num1/num2;
*pmul=num1*num2;
*pdiff=num1-num2;
return num1+num2;

}


int main(void){

int num1=20, num2=10, sum, diff, mul, div;


sum = calculate(num1,num2,&diff,&mul,&div);

printf("%d+%d=%d\n",num1,num2,sum);

printf("%d-%d=%d\n",num1,num2,diff);

printf("%d*%d=%d\n",num1,num2,mul);

printf("%d/%d=%d\n",num1,num2,div);

return 0;
}
