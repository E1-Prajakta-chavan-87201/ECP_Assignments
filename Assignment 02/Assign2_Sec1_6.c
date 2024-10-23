#include<stdio.h>

int main()
{
	int num,reverse=0,digit,temp;
	printf("Enter the number :\n");
	scanf("%d",&num);

	temp=num;

	//reverse number
	while(temp!=0)
	{

	digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
	}
	
	if(num==reverse)
	{
		printf("%d is Palindrome\n",num);
	}
	else
	{
		printf("%d is not a Palindrome\n",num);
	}
}


