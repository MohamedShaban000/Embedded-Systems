/*
 * ex16.c
 *	Function to return unique number in the array
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int return_unique(int arr[], int size);

int main(void)
{
	int arr[100], size, i;
	printf("Enter the size of the array: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
		scanf("%d", &arr[i]);


	return 0;
}

int return_unique(int arr[], int size)
{


}
