#include<stdio.h>

int main(){

int n;
printf("Enter the number :");
scanf("%d",&n);

int i=1,res=1;

printf("Factors of %d are:",n);

while(i<n)
{
if(n%i==0)
{
printf("%d ",i);
}
i++;

}

//printf("result:",&res);

return 0;
}
