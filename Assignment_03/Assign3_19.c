#include<stdio.h>

int main(){
int a,b;
printf("Enter range :");
scanf("%d,%d",&a,&b);
	int i,j;

	for (i=1; i<=a; i++){
		for (j=1; j<=b; j++){
			int res=i*j;

			printf("%d ",res);
		}
		printf("\n");
	}

	return 0;
}
