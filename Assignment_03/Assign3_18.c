#include<stdio.h>

int main(){

	int i,j;

	for (i=1; i<=10; i++){
		for (j=1; j<=10; j++){
			int res=i*j;

			printf("%d ",res);
		}
		printf("\n");
	}

	return 0;
}
