#include<stdio.h>

int main(){

int num1,num2,option;

do{
printf("\n Choose your option:\n ");
printf("1.Addtion\n2.Subtration.\n3.Multiplication\n4.Division\n5.Exit\n");
scanf("%d",&option);

if(option==5)
{
break;
}
switch(option)
{
case 1:
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Addition of two number is = %d",num1+num2);
break;

case 2:
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Subtraction of two number is = %d",num1-num2);
break;

case 3:
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Multiplication of two number is = %d",num1*num2);
break;

case 4:
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
printf("Divisionof two number is = %d",num1/num2);
break;

case 5:
break;

default:
printf("Invalid option\n");
break;
}


}while(option!=5);

}
