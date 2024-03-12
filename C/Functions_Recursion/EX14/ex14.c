/*
 * ex14.c
 *	Reverse digits of a number
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */



#include <stdio.h>

void rev_num(unsigned int num);

int main(void)
{
	int num;
	printf("Input: " );
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	printf("Output: ");
	rev_num(num);
	return 0;
}

void rev_num(unsigned int num)
{
	unsigned int d;
	if(num != 0)
	{
		d= num % 10;
		num = num / 10;
		printf("%d",d);
		rev_num(num);
	}
}
