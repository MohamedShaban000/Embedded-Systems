/*
 * ex5.c
 *	Search an element in the array
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int i,num,searched;
	int a[100];
	printf("Enter number of the elements:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&searched);
	for(i=0;i<num;i++)
	{
		if(searched == a[i])
			break;
	}
	printf("Number found at location: %d",i+1);
	return 0;
}
