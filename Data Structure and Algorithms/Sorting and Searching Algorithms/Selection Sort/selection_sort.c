/*
 * selection_sort.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

void selection_sort(int array[],int size)
{
	int i,j,min_index,temp;
	for(i=0;i<size-1;i++)
	{
		min_index = i;
		for(j=i+1;j<size;j++)
		{
			if(array[j]<array[min_index])		min_index=j;
		}
		temp=array[i];
		array[i]=array[min_index];
		array[min_index]=temp;
	}
}


int main(void)
{
	int i=0;
	int arr[] = {2,3,1,5,8,6,10,12,3};
	selection_sort(arr,9);
	for(i=0;i<9;i++)	printf("%d\t",arr[i]);
	return 0;
}


