/*
 * ex10.c
 *	Reverse string using recursion
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

void reverse_string(void);
int main(void)
{
	printf("Enter a string: ");
	fflush(stdout);		fflush(stdin);
	printf("Reversed string: ");
	reverse_string();
	return 0;
}

void reverse_string(void)
{
	char ch;
	scanf("%c",&ch);
	if(ch != '\n')
	{
		reverse_string();
		printf("%c",ch);
	}

}
