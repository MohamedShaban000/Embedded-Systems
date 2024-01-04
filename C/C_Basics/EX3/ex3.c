/*
 * ex3.c
 *  Description: C Program to Add Two Integers
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	printf("Enter two integers: ");
	fflush(stdout);   fflush(stdin);
	int num1=0,num2=0,sum=0;
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum= %d\n",sum);
	return 0;
}
