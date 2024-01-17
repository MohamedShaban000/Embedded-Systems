/*
 * ex8.c
 *	Function to clear specific bit in a number
 *  Created on: Jan 16, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

void clear_bit(unsigned int* num, int pos);
void bin_show(unsigned int num);


int main(void)
{
	unsigned int num;
	int bit_pos;
	printf("Enter your number: ");
	fflush(stdout);		fflush(stdin);
	scanf("%u",&num);
	bin_show(num);
	printf("\nEnter bit position: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&bit_pos);
	clear_bit(&num, bit_pos);
	printf("The number after modification is : %u\n",num);
	fflush(stdout);
	bin_show(num);
	return 0;
}

void bin_show(unsigned int num)
{
	int i;
	for(i=31;i>=0;i--)
	{
		if( num>>i & 1)
		{
			printf("1");
			fflush(stdout);
		}
		else
		{
			printf("0");
			fflush(stdout);
		}
	}

}

void clear_bit(unsigned int* num, int pos)
{
	(*num) &= ~(1<<(pos-1));
}
