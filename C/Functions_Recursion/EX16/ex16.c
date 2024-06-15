/*
 * ex16.c
 *	Function to return max number of ones between 2 zeros
 *  Created on: Jan 17, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int max_ones_bet_zeros(unsigned int num);

int main(void)
{
	unsigned int num;
	printf("Enter Number:");
	fflush(stdout);		fflush(stdin);
	scanf("%u",&num);
	printf("%d",max_ones_bet_zeros(num));
	fflush(stdout);		fflush(stdin);
	return 0;
}

int max_ones_bet_zeros(unsigned int num)
{
	int i=0,j,ones_count=0,max_ones=0;
	for(i=0;i<32;i++)
	{
		if( ((num>>i) &1) ==0)	break;
	}
	for(j=i;j<31;j++)
	{
		if( ( ((num>>j) &1) ==0 && ((num>>(j+1)) &1) ==1) || (((num>>j) &1) ==1 && ((num>>(j+1)) &1) ==1))
			ones_count++;
		else if(( ((num>>j) &1) ==1 && ((num>>(j+1)) &1) ==0))
		{
			if(ones_count>max_ones)
				max_ones=ones_count;
			ones_count=0;
		}
	}
	return max_ones;

}
