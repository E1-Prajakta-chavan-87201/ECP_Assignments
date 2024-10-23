#include<stdio.h>

int main(){

int a;
printf("Enter the number:");
scanf("%d",&a);
for(int  i=1;i<=10;i++)
{
int res=a*i;

printf("%d * %d = %d\n",a,i,res);
}
printf("\n");
return 0;
}
