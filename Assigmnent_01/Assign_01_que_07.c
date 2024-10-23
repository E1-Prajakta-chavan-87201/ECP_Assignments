#include<stdio.h>
int main()
{
	int num,thousands,hundreds,tens,units,num1,reverse=0,original;
	
	//reverse the number
	printf("Enter the number to reverse :\n");
	scanf("%d",&num1);

	int originial=num1;

	for(int num1;num1>0;num1/=10)
	{
		int digit=num1%10;
		reverse=reverse*10+digit;

		}
	printf("Reverse number of %d is %d",original,reverse);

	printf("Enter the number :\n");

	scanf("%d",&num);

      
        //display face value
	thousands = (num)/1000;
	hundreds = (num/100)%10;
	tens = (num/10)%10;
	units = (num/1)%10;

	printf("Face value of the number is : %d %d %d %d\n",thousands,hundreds,tens,units);

        return 0;
}


