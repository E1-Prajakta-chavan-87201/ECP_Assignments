#include<stdio.h>
int main()
{
	int i,j;
	int multiplication=1;
	printf("Enter the number to print its table :\n");
	scanf("%d",&i);
        
	for(j=1;j<=10;j++)
	
        {
        multiplication = i*j;
	printf("%d * %d=%d\n",i,j,multiplication);
	
	}
	return 0;
}
