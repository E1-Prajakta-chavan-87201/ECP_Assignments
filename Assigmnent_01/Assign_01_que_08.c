#include<stdio.h>
int main()
{
	float num1, num2, num3;
	float avg;
	printf("Enter the three numbers :");
	scanf("%f%f%f",&num1,&num2,&num3);
        

	avg = (num1+num2+num3)/3;
	printf("avg = %lf\n",avg);
	return 0;
}

