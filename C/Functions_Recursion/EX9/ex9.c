/*
 * ex9.c
 *	Calculating factorial using recursion
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

unsigned int fact(int n);

int main(void)
{
	int n;
	do{
		printf("Enter a positive number: ");
		fflush(stdout);		fflush(stdin);
		scanf("%d",&n);
	}while(n<0);
	printf("Factorial of %d is: %u", n, fact(n));

}
unsigned int fact(int n)
{
	if(n > 1)
		return n*fact(n-1);
	else
		return 1;
}

