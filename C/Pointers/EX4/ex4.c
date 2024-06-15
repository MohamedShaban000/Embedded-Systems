/*
 * ex4.c
 *	Print the elements of the array in reverse order
 *  Created on: Jun 10, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>


int main(void)
{
	int arr[15];
	printf("Input the number of elements to store in the array(max 15) : ");
	fflush(stdout);
	int n,i;
	scanf("%d",&n);
	printf("Input %d number of elements in the array : \n",n);
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("element-%d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	int *ptr= arr+n-1;
	i=n;
	printf("The elements of array in reverse order are:\n");
	fflush(stdout);
	while(i)
	{
		printf("element-%d : %d\n",i,*ptr);
		fflush(stdout);
		i--;
		ptr--;
	}
	return 0;
}
