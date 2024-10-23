#include<stdio.h>

int main(){
	int i=1,a,res;

	printf("Enter the number :");
	scanf("%d",&a);

	int n=10;
	while(i<=n)
	{
		res=i*a;
		printf("%d * %d = %d\n",a,i,res);
		i++;
	}

	return 0;

}
