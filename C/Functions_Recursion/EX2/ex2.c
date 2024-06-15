/*
 * ex2.c
 *	c function to swap two arrays with different length
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

void swap_arrays(int a[],int n1,int b[],int n2);
int main(void)
{
	int n1,n2,i;
	int a[100],b[100];
	printf("Enter the size of the first array: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n1);
	printf("Enter the first array elements: ");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the size of the second array: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n2);
	printf("Enter the second array elements: ");
	fflush(stdout);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	swap_arrays(a, n1, b, n2);
	printf("After swapping:\n");
	fflush(stdout);
	printf("First array: ");
	fflush(stdout);
	for(i=0;i<n2;i++)
	{
		printf("%d ",a[i]);
		fflush(stdout);
	}
	printf("\nSecond array:");
	for(i=0;i<n1;i++)
	{
		printf("%d ",b[i]);
		fflush(stdout);
	}
	return 0;
}
void swap_arrays(int a[],int n1,int b[],int n2)
{
	int i,size= (n1>n2)?n1:n2;
	int temp[100];
	for(i=0;i<size;i++)
	{
		temp[i] = a[i];
		a[i]	= b[i];
		b[i]	= temp[i];
	}
}
