#include<stdio.h>

int main(){

int a,res=1;
printf("Enter the number:");
scanf("%d",&a);

for(int i=1; i<=a; i++){
res=res*i;

}
printf("Factorial %d = %d\n", a,res);

return 0;
}
