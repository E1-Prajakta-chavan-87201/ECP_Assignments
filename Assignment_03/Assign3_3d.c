#include<stdio.h>
#include<math.h>
int main(){

	int num,temp,arm=0 ,rem,count=0;

	printf("Enter the number:");
	scanf("%d",&num);

	while(temp !=0){

		count++;
		temp=temp/10;
	}

	printf("count %d => %d \n",num,count);

	temp=num;
	while(temp !=0)
	{
		rem=temp%10;
		arm=arm+ pow(rem,count);
		temp=temp/10;
	}
	if(num==arm)
		printf("Armstrong...\n");
	else
		printf("Not Armstrong...\n");

	return 0;
}
