/*
 * ex3.c
 *	Function to reverse the input array
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

void reverse_array(int a[],int n);
int main(void)
{
	int n,i;
	int a[100];
	printf("Enter the size of the array: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements: ");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Entered array: ");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		fflush(stdout);
	}
	reverse_array(a,n);
	printf("\nReversed array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		fflush(stdout);
	}
	return 0;
}

void reverse_array(int a[],int n)
{
	int j=n-1, i=0, temp;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;		j--;
	}

}

