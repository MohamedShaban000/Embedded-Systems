/*
 * ex12.c
 *	Function to sum all digits of a number
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

unsigned int sum_dig(int num);

int main(void)
{
	int num;
	printf("Input: " );
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	printf("Output: %u",sum_dig(num));
	return 0;
}

unsigned int sum_dig(int num)
{
	unsigned int d;
	static unsigned int s=0;
	if(num != 0)
	{
		d= num % 10;
		num = num / 10;
		s += d;
		sum_dig(num);
	}
	return s;
}
