#include<stdio.h>
#include<math.h>

int main()
{
	
	float a,b,c,s,perimeter,area;

    printf("Enter the values :\n");
	scanf("%f%f%f",&a, &b, &c);
	
	perimeter = a+b+c;
	s=(a+b+c)/2;
	printf("perimeter of triangle is :%f\n",perimeter);
	
	area= sqrt( s * (s-a) * (s-b) * (s-c));
	printf("area of triangle is :%f\n", area);
	return 0;
}
