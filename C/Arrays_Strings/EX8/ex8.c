/*
 * ex8.c
 *	Reverse a string
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0, len;
	char str[100];
	printf("Enter a string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	len = strlen(str);
	printf("Reversed string is: ");
	for(i=len-1;i>=0;i--)
		printf("%c",str[i]);
	return 0;
}

