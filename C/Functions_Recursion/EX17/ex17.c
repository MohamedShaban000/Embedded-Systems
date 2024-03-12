/*
 * ex17.c
 *	Function to revers words in a string
 *  Created on: Jan 18, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void reverse_string_words();

int main(void)
{
	printf("Input: ");
	fflush(stdout);		fflush(stdin);
	reverse_string_words();
	return 0;
}

void reverse_string_words()
{
	char str[100][100];
	int i=0;
	for(i=0;i<3;i++)
	{
		scanf("%s",str[i]);
	}
	for(;i>=0;i--)
	{
		printf("%s ",str[i]);
		fflush(stdout);
	}

}
