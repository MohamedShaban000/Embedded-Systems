/*
 * ex10.c
 *	The maximum between 3 numbers
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	float num1=0,num2=0,num3=0;
	printf("Enter the three numbers: ");
	fflush(stdout);		fflush(stdin);
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1>=num2)
	{
		if(num1>=num3)
			printf("%.2f is the maximum",num1);
		else
			printf("%.2f is the maximum",num3);
	}
	else
	{
		if(num2>=num3)
			printf("%.2f is the maximum",num2);
		else
			printf("%.2f is the maximum",num3);
	}
	return 0;
}
