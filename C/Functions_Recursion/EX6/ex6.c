/*
 * ex6.c
 *	Check the user name
 *  Created on: Jan 16, 2024
 *  Author: Mohamed Shaban
 */

#include <Stdio.h>
#include <string.h>

int are_different(char str1[], char str2[]);

int main(void)
{
	char str1[] = "Mohamed Shaban";
	char str2[20];
	printf("Enter your name:");
	fflush(stdout);		fflush(stdin);
	gets(str2);
	if(!are_different(str1,str2))
	{
		printf("They are the same");
		fflush(stdout);
	}
	else
	{
		printf("They are different");
		fflush(stdout);
	}
	return 0;
}
int are_different(char str1[], char str2[])
{
	if(strcmp(str1,str2))
		return 1;
	else
		return 0;
}
