/*
 * ex2.c
 *  Description: C Program to Print a Integer Entered by a User
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	printf("Enter an integer: ");
	fflush(stdout);
	int num=0;
	scanf("%d",&num);
	printf("You entered: %d\n",num);
	return 0;
}
