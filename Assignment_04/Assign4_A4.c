#include<stdio.h>


int flag = -1;
void add(int x ,int y);
void sub(int x ,int y );
void max(int x ,int y );
void  div(int x ,int y );

int main()
{ 
   int a ,b;
   char ch1,ch;
label:
   printf("Enter value a :");
   scanf("%d",&a);

   printf("Enter character :");
   scanf("%*c%c",&ch);
   
   printf("Enter value b :");
   scanf("%d",&b);

   
   
   switch(ch)
   {
   
   case '+': add(a,b);

   break;

   case'-': sub(a,b);
   break;

   case '*': max(a,b);
    break;

	case'/': if(b==0)
	{
       printf("invaild case ");
	   flag -1;
     
	}

	else{

       div(a,b);
	}

    break;

}


	printf("Do you want to continue :  [y/n]");
      scanf("%*c%c",&ch1);
	  if(ch1=='y')

       goto label;
   
     return 0; 

    }

    void add(int x,int y)
{
     printf("sum of 2 number = %d\n",x+y);
    
}
    void sub(int x,int y)
 {
     
     printf("sum of 2 number = %d\n",x-y);
}
   void max(int x,int y)
 {
    
     printf("max of 2 number = %d\n",x*y);
}
   void div(int x,int y)
{
    
     printf("div of 2 number = %d\n",x/y);

}

