
#include<stdio.h>

int main()
{
	int *iptr,age = 30;
	float *fptr,sal = 1500.50;

	iptr = &age;
	fptr = &age;

	printf("%f\t%d\n",*fptr,*iptr);
	return 0;
}
