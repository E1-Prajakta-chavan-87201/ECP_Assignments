#include<stdio.h>
int main()
{
	int choice;
	int num1,num2;
	printf("Enter the values for num1,num2 :\n");
	scanf("%d%d",&num1,&num2);

do
	{
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n :");

	printf("Enter the choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 0:
	printf("Return to exit status\n");
	break;

	case 1:
		printf("%d+%d=%d\n",num1,num2,num1+num2);
		break;

	case 2:
		printf("%d-%d=%d\n",num1,num2,num1-num2);
		break;

	case 3:
		printf("%d*%d=%d\n",num1,num2,num1*num2);
		break;

	case 4:
		printf("%d/%d=%d\n",num1,num2,num1/num2);
		break;

		default:
		printf("Invalid operator\n");

		}
}

while(choice!=0);
	return 0;
}


		

		
