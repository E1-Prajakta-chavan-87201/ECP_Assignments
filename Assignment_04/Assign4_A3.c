#include<stdio.h>


int accept_value();
void fun_add(int a, int b);

void fun_sub(int a, int b);

void fun_mul(int a, int b);

void fun_div(int a, int b);

int main(){

	int n1,n2;
	n1=accept_value();
	n2=accept_value();



enum cal{EXIT,ADD,SUB,MUL,DIV}ch;

	printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
	printf("Your choice: ");
	scanf("%d",(int*)&ch);

	switch(ch)
	{

		case ADD:fun_add(n1,n2);
		break;
		case SUB:fun_sub(n1,n2);
		break;
		case MUL:fun_mul(n1,n2);
		break;
		case DIV:fun_div(n1,n2);
        break;
	
		default : printf("Invalid Choice ");
	}
	return 0;
}


int accept_value(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
return n;
}









void fun_add(int a, int b)
{
printf("Add : %d\n", a+b);

}

//----------------------------------------------------------

void fun_sub(int a, int b)
{
printf("Sub: %d\n", a-b);
}

//----------------------------------------------------------
void fun_mul(int a, int b){
printf ("mul:%d\n",a*b);
}

//---------------------------------------------------------

void fun_div(int a, int b){
printf("div:%d\n",a/b);
}







