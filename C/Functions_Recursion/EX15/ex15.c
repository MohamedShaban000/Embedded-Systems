/*
 * ex15.c
 *	Function to count number of ones in a number
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int bin_ones_count(unsigned int num);

int main(void)
{
	unsigned int num;
	printf("Enter your number: ");
	fflush(stdout);		fflush(stdin);
	scanf("%u",&num);
	printf("Number of ones in %u : %d",num,bin_ones_count(num));
	return 0;
}



int bin_ones_count(unsigned int num)
{
	int i,count=0;
	for(i=31;i>=0;i--)
	{
		if( num>>i & 1)
		{
			count++;
		}
		else
		{}
	}
	return count;

}
