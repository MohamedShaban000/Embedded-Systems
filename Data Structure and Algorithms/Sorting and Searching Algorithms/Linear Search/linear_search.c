/*
 * linear_search.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

int linear_search(int array[],int size,int target)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(target==array[i])		return i;
	}
	return -1;
}


int main(void)
{
	int arr[] = {2,3,1,5,8,6,10,12,3};
	printf("%d",linear_search(arr,9,10));
	return 0;
}


