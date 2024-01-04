/*
 * ex5.c
 *  Description: Find ASCII Value of a Character
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	printf("Enter a character: ");
	fflush(stdout);  fflush(stdin);
	char character;
	int asci=0;
	scanf("%c",&character);
	asci=character;
	printf("ASCI Value of %c is: %d\n", character, asci);
	return 0;
}
