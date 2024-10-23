#include<stdio.h>

void printFib(int n){

	int i,c=n;
	int a=n;
	int b=n+1;
	
	for(i=n;i<n;i++){
printf("%d",c);
a=b;
b=c;
c=a+b;

	}

int main(){
	int n=9;
   printFib(n);
  // printf("%d",n);
	return 0;
}
}
