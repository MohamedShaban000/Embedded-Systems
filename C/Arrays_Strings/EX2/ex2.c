/*
 * ex2.c
 *	Calculating average using array
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int i,num;
	float a[100], sum=0.0;
	printf("Enter number of the elements:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d. Enter the element",i+1);
		fflush(stdout);		fflush(stdin);
		scanf("%f",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum+=a[i];
	}
	printf("The average is %f",sum/num);
	return 0;
}
