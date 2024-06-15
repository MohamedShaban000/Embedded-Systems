/*
 * insertion_sort.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>

void insertion_sort(int array[],int size)
{
	int i, j ,temp;
	for(i=1;i<size;i++)
	{
		temp=array[i];
		j=i-1;
		while(j>=0 && array[j]>temp)
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}

}


int main(void)
{
	int i=0;
	int arr[] = {24,90,3,4,5,6,10,12,3};
	insertion_sort(arr,9);
	for(i=0;i<9;i++)	printf("%d\t",arr[i]);
	return 0;
}
