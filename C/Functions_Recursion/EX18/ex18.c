/*
 * ex18.c
 *	Unique number inn the array
 *  Created on: Jun 6, 2024
 *      Author: user
 */

#include <stdio.h>

//choose the max element you will enter
#define MAX_ELEM_VALUE 100

int unique_in_array(int size)
{
	int i=0,elem=0;
	int freq_arr[MAX_ELEM_VALUE]={0};
	for(;i<size;i++)
	{
		scanf("%d",&elem);
		freq_arr[elem-1]++;
	}
	for(i=0;i<100;i++){
		if(freq_arr[i]==1)
		{
			return i+1;
		}
	}

	return -1;
}

int main(void)
{
	//give the size of the array
	printf("%d",unique_in_array(7));
	return 0;
}
