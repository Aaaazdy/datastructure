#include<stdio.h>

void bubbleSort(int *arr,int n)//arr数组指针n数组长度
{
	int m,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				m=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=m;
			}

        }

	}

}
 