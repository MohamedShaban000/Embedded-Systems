/*
 * bubble_sort.c
 *	preferred if it has first elements in order
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

void bubble_sort(int array[],int size)
{
	int i, j, temp, flag;
	for(i=0;i<size-1;i++)
	{
		flag=0;
		for(j=0;j<size-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}


int main(void)
{
	int i=0;
	int arr[] = {24,90,3,4,5,6,10,12,3};
	bubble_sort(arr,9);
	for(i=0;i<9;i++)	printf("%d\t",arr[i]);
	return 0;
}

