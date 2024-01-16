/*
 * ex4.c
 *	Insert element in array
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int i,num,insert,loc;
	int a[100];
	printf("Enter number of the elements:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&insert);
	printf("Enter the location:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&loc);
	for(i=num;i>loc-1;i--)
		a[i+1]=a[i];
	a[loc]=insert;
	for(i=0;i<=num;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
