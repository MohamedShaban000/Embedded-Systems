/*
 * ex5.c
 *	Last occurrence of a number in the array
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int last_occurrence(int a[],int n, int searched);

int main(void)
{
	int n,i,searched;
	int a[100];
	printf("Enter the size of the array: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements: ");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&searched);
	printf("INDEX %d",last_occurrence(a,n,searched));
	return 0;
}

int last_occurrence(int a[],int n, int searched)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		if(searched == a[i])
			return i;
	}
	return -1;
}
