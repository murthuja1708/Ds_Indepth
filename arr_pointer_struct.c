
#include<stdio.h>

int prob1()
{
	int i,size=5,arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int prob2()
{
	int i=4,j,arr[4]={2,4,8,16};//variable size cannot be initialized

	while(i)
	{
		printf("i is %d and value at i is %d\n",i,arr[i]);
		j = arr[i] + i;
		i--;
	}
	printf("j = %d\n",j);
}

int main()
{
	prob2();
	return 0;
}
