/*
 * ex13.c
 *	Sum of numbers till the entered number
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int num=0,sum=0,i=0;
	printf ("Enter the integer number: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		sum += i;
	}
	printf("Sum= %d",sum);
	return 0;
}
