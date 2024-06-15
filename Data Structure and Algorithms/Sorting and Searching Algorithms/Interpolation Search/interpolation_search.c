/*
 * interpolation_search.c
 *	for sorted array (homogeneous elements (preferred) )
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

int interpolation_search(int array[],int size,int target)
{
	int low=0, high=size-1, probe;
	while(target>=array[low] && target<=array[high] && low<=high)
	{
		probe = low + (high - low) * (target - array[low]) /  (array[high] - array[low]);
		if(target>array[probe])			low=probe+1;
		else if(target<array[probe])		high=probe-1;
		else return probe;
	}
	return -1;
}

int main(void)
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	printf("%d",interpolation_search(arr,9,5));
	return 0;
}
