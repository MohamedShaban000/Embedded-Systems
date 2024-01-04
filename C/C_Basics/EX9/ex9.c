/*
 * ex9.c
 *	Vowel or Constant
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main()
{
	char character=0;
	printf("Enter the character you want to check: ");
	fflush(stdout);			fflush(stdin);
	scanf("%c",&character);
	if(character=='a' ||character=='e' ||character=='i' ||character=='o' ||character=='u'
	   ||character=='A' ||character=='E' ||character=='I' ||character=='O' ||character=='U')
		printf("%c is vowel",character);
	else
		printf("%c is constant",character);

}

