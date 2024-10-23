#include<stdio.h>
#include<limits.h>
#include<float.h>

int main (void)
{
	printf("\n char               %%c       %ld     %d to %d",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("\n unsigned char      %%c       %ld      %d to %d",sizeof(unsigned char),0,UCHAR_MAX);
	printf("\n short int          %%hd      %ld      %hd to %hd",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("\n unsigned short int %%hu      %lu      %d to %ld",sizeof(unsigned short int),0,USHRT_MAX);
	printf("\n int                %%d       %ld      %ld to %ld",sizeof(int),INT_MIN,INT_MAX);
	printf("\n unsigned int       %%u       %lu      %d to %ld",sizeof(unsigned int),0,UINT_MAX);
	printf("\n long int           %%ld      %ld      %d to %d",sizeof(long int),LLONG_MIN,LLONG_MAX);
	printf("\n unsigned long int  %%lu      %lu      %d to %lu",sizeof(unsigned long int),0,ULLONG_MAX);
	printf("\n float              %%f       %lu      %e to %e",sizeof(float),FLT_MIN,FLT_MAX);
	printf("\n double             %%lf      %lu      %e to %e",sizeof(double),DBL_MIN,DBL_MAX);
	printf("\n long double        %%Lf      %lu      %LE to %LE",sizeof(long double),LDBL_MIN,LDBL_MAX);

	return 0;
	}
