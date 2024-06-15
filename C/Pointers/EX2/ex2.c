/*
 * ex2.c
 *	Print all alphabet using pointer
 *  Created on: Jun 10, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>


int main(void)
{
	char alpha[26];
	char* ptr = alpha;
	int i;
	for(i=0;i<26;i++)
	{
		(*ptr) = i + 'A';
		ptr++;
	}
	ptr = alpha;
	for(i=0;i<26;i++)
	{
		if( ptr[i] == 'R')
		{
			printf("\n");
			printf("%c ",ptr[i]);
		}
		else
		{
			printf(" %c ",ptr[i]);

		}
	}
	return 0;
}
