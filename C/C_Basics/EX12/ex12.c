/*
 * ex12.c
 *	Alphabet or Not
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	char character;
	printf ("Enter the character you want to check: ");
	fflush(stdout);		fflush(stdin);
	scanf("%c",&character);
	if( (character >='a'  && character <= 'z') || (character >='A'  && character <= 'Z') )
		printf("%c is alphabet",character);
	else
		printf("%c is not alphabet",character);
	return 0;
}
