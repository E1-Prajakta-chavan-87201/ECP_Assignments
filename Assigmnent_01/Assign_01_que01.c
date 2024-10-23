#include<stdio.h>

int main()
{

	signed int num1,num2,result1;
	unsigned int num3,num4,result2;
	long int num5,num6,result3;
	
	
	printf("Enter the signed integer values ;\n");
	scanf("%d%d",&num1,&num2);


	
	printf("Enter the unsigned integer values ;\n");
	scanf("%u%u",&num3,&num4);
	
	printf("Enter the long integer values ;\n");
	scanf("%ld%ld",&num5,&num6);

	result1=num1+num2;
	printf("Sum of two signed int %d\n",result1);

	result2=num3-num4;
	printf("Difference of two unsigned int %u\n",result2);

	result3=num5*num6;
	printf("Multiplication of two long int %ld\n",result3);

	return 0;

}
