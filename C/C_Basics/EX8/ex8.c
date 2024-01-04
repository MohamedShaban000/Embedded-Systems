/*
 * ex8.c
 *	Even or Odd
 *  Created on: Jan 3, 2024
 *  Author: Mohammed Shaban
 */


#include <stdio.h>

int main(void)
{
	int num=0;
	printf("Enter the integer you want to check: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is Even",num);
	else
		printf("%d is Odd",num);
	return 0;
}
