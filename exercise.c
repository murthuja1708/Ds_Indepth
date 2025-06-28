#include<stdio.h>


int question1()
{
	int i,size=5,arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

void question2()
{
	int arr[4] = {2,4,8,16},i=4,j;
	while(i)
	{
		printf("arr[%d] is %d\n",i,arr[i]);
		j = arr[i] + i;
		i--;
	}
	printf("j = %d\n",j);
}

int main()
{
	question2();
	return 0;
}
