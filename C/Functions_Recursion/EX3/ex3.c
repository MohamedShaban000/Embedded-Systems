/*
 * ex3.c
 *	Function to reverse the input array
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

void reverse_array(int a[],int r[],int n);
int main(void)
{
	int n,i;
	int a[100],r[100];
	printf("Enter the size of the array: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements: ");
	fflush(stdout);		fflush(stdin);
	reverse_array(a,r,n);
	printf("Entered array: ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		fflush(stdout);
	}
	printf("\nReversed array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",r[i]);
		fflush(stdout);
	}
	return 0;
}

void reverse_array(int a[],int r[],int n)
{
	int s=n, i;
	for(i=0;i<n;i++,s--)
	{
		scanf("%d",&a[i]);
		r[s-1]=a[i];
	}
}

