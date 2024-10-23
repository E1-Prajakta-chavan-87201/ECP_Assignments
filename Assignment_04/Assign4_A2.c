#include<stdio.h>

int cal_power();

int main(){

int cal_power();

return 0;
}

int cal_power(){

int base,index, res=1;
printf("Enter the base :");
scanf("%d",&base);

printf("Enter the index :");
scanf("%d",&index);

for(int i=1; i<=index;i++)
{
int res;
res=base*res;
}
printf("%d ^ %d = %d\n", base,index,res);

return res;
}
