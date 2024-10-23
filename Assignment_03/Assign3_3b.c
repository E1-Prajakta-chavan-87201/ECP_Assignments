#include<stdio.h>

int main(){

int num,rev=0,rem,temp;
printf("Enter the number:");
scanf("%d",&num);

temp=num;

while(temp !=0)
{

rem=temp%10;
rev=rev*10+rem;
temp= temp/10;

}
printf ("Reverse of %d is %d",num,rev);

return 0;
}
