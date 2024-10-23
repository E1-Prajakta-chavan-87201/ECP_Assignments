#include<stdio.h>

int main(){

int base, index, res=1;
printf("Enter the base:");
scanf("%d",&base);

printf("Enter the index:");
scanf("%d",&index);

for(int i=1; i<=index; i++){
res=base*res;
}

printf("%d ^ %d = %d\n",base, index,res);




return 0;
}
