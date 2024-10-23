#include<stdio.h>

int main(){

int n,res=1;
printf("Enter the number : ");
scanf("%d",&n);

int limit=n;
int i=1;

while(i<=limit)
{
res=i*res;
//printf("%d*",res);
i++;
}

printf("%d",res);
return 0;
}
