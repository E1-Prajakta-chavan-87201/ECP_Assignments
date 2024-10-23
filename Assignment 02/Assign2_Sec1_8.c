#include<stdio.h>
    int main()
    {
       float quantity,dp,fp,price;
       printf("Enter the quantity :\n");
       scanf("%f",&quantity);
   
       if(quantity>30 && quantity<50)
       {
          price=(quantity*5);
          dp=(price*10)/100;
          fp=price-dp;
          printf("Final price :%f\n",fp);
          }
  
          else if(quantity>=50)
          {
              price=(quantity*5);
              dp=(price*15)/100;
              fp=price-dp;
              printf("Final price :%f\n",fp);
              }
  
              else
                  {
                      fp=(quantity*5);
                      printf("Final price :%f\n",fp);
					  }

					  return 0;
					  }
                 
