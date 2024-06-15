/*
 * binary_search.c
 *	for sorted array only
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int binary_search(int array[],int size,int target)
{
	int low=0, high=size-1, middle;
	while(target>=array[low] && target<=array[high] && low<=high)
	{
		middle=low+(high-low)/2;
		if(target>array[middle])			low=middle+1;
		else if(target<array[middle])		high=middle-1;
		else return middle;
	}
	return -1;
}

int main(void)
{
	int arr[]={1,2,7,10,12,18,23,40,41};
	printf("%d",binary_search(arr,9,23));
	return 0;
}
