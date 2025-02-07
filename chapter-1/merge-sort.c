#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int merge(int arr[],int p,int q,int r);
int merge_sort(int arr[],int p,int r);
int main()
{
	int arr[] = {7,5,6,3,4,1,2};
	size_t len = sizeof(arr)/sizeof(arr[0]);
	int p = 0;

	merge_sort(arr,p,len);

	return 0;
}

int merge_sort(int arr[],int p,int r)
{
	if(p<r)
	{
		int q = ((p+r)/2);
		printf("p = %d q = %d\n",p,q);
		merge_sort(arr,p,q);
		printf("q+1 = %d r = %d\n",q+1,r);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

int merge(int arr[],int p,int q,int r)
{
	/*
	for(int i=0;i<r;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("}");
	printf("\n");
*/

	int n1  =  q-p;
	int n2  =  r-q;
	
	int* left_arr = (int*)malloc(sizeof(int)*(n1+1));
	int* right_arr = (int*)malloc(sizeof(int)*(n2+1));

	int* ltemp = left_arr;
	int*rtemp = right_arr;

	for(int i=0;i<n1;i++)
	{
		*ltemp = arr[p+i];
		ltemp++;
	}

	*ltemp = INT_MAX;


	for(int i=0;i<n2;i++)
	{
		*rtemp = arr[q+i];
		rtemp++;
	}

	*rtemp = INT_MAX;

	/*



	for(int k=p;k<3;k++)
	{
		printf("%d %d\n",*ltemp,*rtemp);
		ltemp++;
		rtemp++;
	}

	if(*ltemp != INT_MAX)
	{
		printf("%d ",*ltemp);
	}

	if(*rtemp != INT_MAX)
	{
		printf("%d ",*rtemp);
	}

	printf("\n");
	*/
	ltemp = left_arr;
	rtemp = right_arr;

	int i=0,j=0;

	for(int k=p;k<r;k++)
	{
		printf("for k : %d comparing %d and %d with p = %d, q = %d, r = %d\n",k,*ltemp,*rtemp,p,q,r);
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


	for(int i=0;i<r;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	free(left_arr);
	free(right_arr);


	return 0;


}

