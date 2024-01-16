/*
 * ex6.c
 *	Frequency of a character in a string
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>


int main(void)
{
	int i = 0,counter = 0;
	char str[100], ch;
	printf("Enter a string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdout);		fflush(stdin);
	scanf("%c",&ch);
	while(str[i] != '\0')
	{
		if(str[i] == ch)
			counter++;
		i++;
	}
	printf("Frequency of %c is %d",ch,counter);
	fflush(stdout);		fflush(stdin);
	return 0;
}
