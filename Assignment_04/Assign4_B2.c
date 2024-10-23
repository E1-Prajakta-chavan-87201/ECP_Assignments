#include<stdio.h>


int cal_pow(int base , int power)
{

	if(power==0)
		return 1;
	else
		return  base*cal_pow(base, power-1);
}
//int cal_pow(int base, int power);

int main(){

	int pow;
	int n,m;
	printf("Enter the base:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&m);

	pow= cal_pow(n,m);
	printf("power=%d",pow);

	return 0;
}

