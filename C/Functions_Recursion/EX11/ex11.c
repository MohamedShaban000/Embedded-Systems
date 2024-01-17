/*
 * ex11.c
 *	Calculating power of a number using factorial
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

long long int power(int base, int exp);
int main(void)
{
	int base, exp;
	printf("Enter the base: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d", &base);
	printf("Enter the exponent: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d", &exp);
	printf("%d to the power %d is %lld",base, exp, power(base,exp));
	return 0;
}

long long int power(int base, int exp)
{
	if(exp>1)
		return base*power(base,exp-1);
	else
		return base;
}


