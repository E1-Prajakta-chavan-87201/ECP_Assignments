#include<stdio.h> 

int a,b;

a=5;
b=10;

int sum(){
int result;
result=a+b;
return result;
}

int main(){
int num;
num=sum();
printf("%d+%d=%d",a,b,num);



return 0;
}
