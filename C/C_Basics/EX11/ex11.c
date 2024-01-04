/*
 * ex11.c
 *	Positive or Negative or Zero
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	float num=0;
	printf("Enter the number: ");
	fflush(stdout);			fflush(stdin);
	scanf("%f",&num);
	if(num>0)
		printf("Your number is positive");
	else if(num<0)
		printf("Your number is negative");
	else
		printf("Your number is zero");
	return 0;
}
