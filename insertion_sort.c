#include<stdio.h>

int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int temp,key;
	for(int i=1;i<6;i++)  //loops max n times. last time for check if value is 6 or not
	{
		key = arr[i];    // n-1 times
		int j=i-1;       // n-1 times
 
		//find the index in the array where to put the number
		while(j >= 0 && arr[j] <key)   //for every 'i' it starts from j to -1 so suppose j=5 in worst case it needs to check for 4,3,2,1,0,-1   sum of all the times
		{
//			printf("%d %d %d\n",j,key,arr[j]);
			//both below lines for every 'i' it starts from j to 0 so suppose j=5 in worst case it needs to check for 4,3,2,1,0  sum of all the times but 1 less
			arr[j+1] = arr[j];
			j = j-1;	
			/*
			for(int i=0;i<6;i++)
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
			*/
		}
		arr[j+1]=key;  // this n-1 times

		/*
		for(int i=0;i<6;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		*/
	}

	
	for(int i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	

	return 0;
}
