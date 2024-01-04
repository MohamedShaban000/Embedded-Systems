/*
 * ex4.c
 *  Description: C Program to Multiply two Floating Point Numbers
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	printf("Enter two float numbers : ");
	fflush(stdout);   fflush(stdin);
	float num1=0,num2=0,mult=0;
	scanf("%f%f",&num1,&num2);
	mult=num1*num2;
	printf("Product= %f\n",mult);
	return 0;
}
