
#include<stdio.h>
int main()
{
	//int arr[8]={1,2,3,4,5,6,7}; //excess elements in array initializer

	//int arr2[9]={0};

	//arr2 = arr; //assignment to array with expression type

	int arr[4] = {2,4,8,16};
	int i=4,j;

	while(i)
	{
		printf("arr[%d] is %d\n",i,arr[i]);
		j = arr[i] + i;
		i--;
	}

	printf("j = %d\n",j);

	return 0;
}
