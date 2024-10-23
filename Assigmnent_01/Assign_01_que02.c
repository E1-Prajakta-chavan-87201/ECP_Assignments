#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
        
	printf("octal number :%o\n",num);
	printf("hexadecimal number :%x\n",num);
	 char ch=num;
	 printf("character :%c\n",ch);

	 return 0;
}

