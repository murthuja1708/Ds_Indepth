
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

int merge(int arr[],int p,int q,int r);
void merge_sort(int arr[],int p,int r);
int main()
{
	int arr[] = {7,5,6,3,4,1,2};
	size_t len = sizeof(arr)/sizeof(arr[0]);
	int p = 0;

	merge_sort(arr,p,len);

	return 0;
}

void merge_sort(int arr[],int low,int high)
{
	//printf("merge_sort:low = %d  high is %d\n",low,high);
	if(low<high)
	{
		int mid = (low + high)/2;
		//printf("merge_sort1:mid = %d \n",mid);
		merge_sort(arr,low,mid);
		//printf("merge_sort2:mid = %d\n",mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int merge(int arr[],int low,int mid,int high)
{
	printf("merge:low is %d mid is %d high is %d\n",low,mid,high);
	printf("{ ");	
	for(int i=0;i<=high;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("}");
	printf("\n");

	int n1  =  mid-low+1;
	int n2  =  high-mid;

	printf("n1 = %d\n n2 = %d\n",n1,n2);
	
 	int* left_arr = (int*)malloc(sizeof(int)*(n1+1));
	int* right_arr = (int*)malloc(sizeof(int)*(n2+1));

	int* ltemp = left_arr;
	int* rtemp = right_arr;
	printf("copying left array from low %d\n",low);

	for(int i=0;i<n1;i++)
	{
		printf("%d, ",arr[low+i]);
		*ltemp = arr[low+i];
		ltemp++;
	}

	*ltemp = INT_MAX;
	printf("copying done\n");

	printf("copying right array from %d\n",mid+1);
	
	for(int j=0;j<n2;j++)
	{
		printf("%d, ",arr[mid+j]);
		*rtemp = arr[mid+j];
		rtemp++;
	}

	*rtemp = INT_MAX;
	printf("copying done\n");
	
	ltemp = left_arr;
	rtemp = right_arr;

	for(int k=low;k<high;k++)
	{
		printf("for k : %d comparing %d and %d with low = %d, mid = %d, high = %d\n",k,*ltemp,*rtemp,low,mid,high);
		if( *ltemp <= *rtemp)
		{
			arr[k] = *ltemp;
			ltemp++;
		}
		else {
			arr[k] = *rtemp;
			rtemp++;
		}	

	}

	for(int i=0;i<high;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(left_arr);
	free(right_arr);


	return 0;


}

