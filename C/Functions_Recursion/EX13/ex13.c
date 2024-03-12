/*
 * ex13.c
 *	Function to find square root of an integer
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>
#include <math.h>

double sqrt_fn(unsigned int num);

int main(void)
{
	int num;
	printf("Input: " );
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	printf("Output: %.3lf",sqrt_fn(num));
	return 0;
}

double sqrt_fn(unsigned int num)
{
	return sqrt(num);
}
