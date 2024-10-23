#include<stdio.h>

int main()
{

  int emp_id, dept_no;
  char degn;
  
  printf("Enter the emp_id:%d",emp_id);
  scanf("%d",&emp_id);

  printf("Enter the dept_no:%d",dept_no);
  scanf("%d",&dept_no);

  printf("Enter the Designation:%c",degn);
  scanf("%*c%c",&degn);

  switch( dept_no  )
	{
		case 10:printf("Employee with emp_id :%d working in Marketing Department ",emp_id);
				break;
		case 20:printf("Employee with emp_id :%d working in Management Department ",emp_id);
				break;
		case 30:printf("Employee with emp_id :%d working in Sales Department  ",emp_id);
		        break;
		case 40:printf("Employee with emp_id :%d working in Designing Department  ",emp_id);
		        break;
		default : printf("Invalid Dept Number \n");
	}

	switch(degn)
	{
		case 'M' :printf("as a Manager \n");
					break;
		case 'S' :printf("as a Supervisor \n");
					break;
		case 's' :printf("as a Security Officer \n");
		            break;
		case 'C' :printf("as a Clerk \n");
		            break;
		default : printf("Invalid Designation code \n");
				break;

	 }

   return 0;
}
