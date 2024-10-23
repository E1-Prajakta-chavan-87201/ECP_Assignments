#include<stdio.h>

int main()
{

	int year;
	int month;

	printf("Enter the month: ");
	scanf("%d",&month);

	printf("Enter the year: ");
	scanf("%d",&year);

	switch(month)

  {

	case 1: printf("Jan has 31 days\n");
			       break;

	case 2: if(("year % 400 == 0 && year % 100 !=0) || (year%4==0"))
				  printf("Feb has 29 days\n");
			       else
				      printf("Feb has 28 days\n");
			       break;

	case 3:  printf("March has 31 days\n");
			       break;

	case 4: printf("April has 30 days\n");
			       break;

	case 5: printf("May has 31 days\n");
			       break;

	case 6: printf("June has 30 days\n");
			       break;


	case 7: printf("July has 31 days\n");
			       break;

	case 8: printf("August has 31 days\n");
			       break;

	case 9: printf("September has 30 days\n");
			       break;

	case 10: printf("October has 31 days\n");
			      break;

	case 11: printf("November has 31 days\n");
			      break;

	case 12: printf("December has 31 days\n");
			      break;

	default: printf("Invalid result");
	              break;

  }

      return 0;
}
