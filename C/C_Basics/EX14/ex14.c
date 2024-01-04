/*
 * ex15.c
 *	Factorial of the number
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int num=0,fact=1,i=0;
	printf ("Enter the integer number: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	if(num<0)
		printf("it doesn't exist");
	else
	{
		for(i=1;i<=num;i++)
			fact *= i ;
		printf("Fact= %d",fact);
	}
	return 0;
}
