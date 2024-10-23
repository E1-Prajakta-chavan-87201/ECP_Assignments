#include<stdio.h>

int main(){

int num,temp,rem,sum=0;
printf("Enter the num :");
scanf("%d",&num);

temp=num;

while (temp !=0)
{
 rem=temp%10;
 
 sum=sum+rem;
 temp /=10;
}
printf("sum of %d => %d\n",num,sum);

return 0;
}
