/*
 * ex3.c
 *	Reverse a string using pointer
 *  Created on: Jun 10, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Input a string : ");
	fflush(stdout);
	char ptr[100];
	gets(ptr);
	int i=strlen(ptr);
	char* temp = ptr+strlen(ptr)-1;
	while(i)
	{
		printf("%c",*temp);
		temp--;
		i--;
	}

	return 0;
}
