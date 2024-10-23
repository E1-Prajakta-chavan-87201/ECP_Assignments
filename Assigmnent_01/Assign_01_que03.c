#include<stdio.h>

int main()
{
	int num1,num2,num3;

	printf("Enter the decimal number :\n");
	scanf("%d",&num1);
	printf("Enter the octal number :\n");
	scanf("%o",&num2);

	printf("Enter the hexadecimal number :\n");
	scanf("%x",&num3);

	printf("%c %c %c\n",num1,num2,num3);
	return 0;
}
