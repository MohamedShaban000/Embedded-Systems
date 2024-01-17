/*
 * ex4.c
 *	Function to check if number is power of 3 or not
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>
#include <math.h>

int is_power_3(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("Enter the number you want to check: ");
	fflush(stdout);		fflush(stdin);
	scanf("%u",&n);
	if(is_power_3(n))
	{
		printf("%u ==> 0",n);
		fflush(stdout);
	}
	else
	{
		printf("%u ==> 1",n);
		fflush(stdout);
	}
	return 0;
}

int is_power_3(unsigned int n)
{
	double i = log(n) / log(3);
	return i == trunc(i);
}
