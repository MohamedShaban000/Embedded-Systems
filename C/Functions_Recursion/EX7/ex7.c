/*
 * ex7.c
 *	Function to show the binary representation and get the required bit
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

void bin_show(unsigned int num);
int get_bit(unsigned int num, int pos);

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
	if(get_bit(num,bit_pos))
	{
		printf("Bit = %d",1);
		fflush(stdout);
	}
	else
	{
		printf("Bit = %d",0);
		fflush(stdout);
	}
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

int get_bit(unsigned int num, int pos)
{
	return ( num>>(pos-1) &1 );
}
