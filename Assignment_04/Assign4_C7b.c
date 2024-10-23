#include<stdio.h>

int calculate(int a,int b, int *pdiff)
{
	*pdiff=a-b;
	return a+b;
}

int main(void){

	int a=10, b=20, sum, diff;
	sum= calculate( a, b,&diff);
	printf("%d+%d=%d\n",a,b,sum);
	printf("%d-%d=%d\n",a,b,diff);

	return 0;
}
