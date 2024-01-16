/*
 * ex7.c
 *	Length of a string
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>


int main(void)
{
	int i = 0;
	char str[100];
	printf("Enter a string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	while(str[i] != '\0')
	{
		i++;
	}
	printf("The length is: %d",i);
	fflush(stdout);		fflush(stdin);
	return 0;
}

