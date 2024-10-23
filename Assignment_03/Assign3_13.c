#include<stdio.h>

int main(){

int n;
printf("Enter the number: ");
scanf("%d",&n);

int a=1,b=1,c;
printf("0,1,1,");


for(int i=1; i<=n-2; i++)
{
c=a+b;
printf("%d, ",c);

a=b;
b=c;

}

return 0;
}
