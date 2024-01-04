/*
 * ex15.c
 *	Simple Calculator
 *  Created on: Jan 3, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	char op;
	int num1,num2,result=0;
	printf("Enter the operation you want: ");
	fflush(stdout);		fflush(stdin);
	scanf("%c",&op);
	printf("Enter the two numbers: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d%d",&num1,&num2);
	switch(op)
	{
	case '+':
	{
		result= num1+num2;
		printf("Result= %d",result);
		break;
	}
	case '-':
	{
		result= num1-num2;
		printf("Result= %d",result);
		break;
	}
	case '*':
	{
		result= num1*num2;
		printf("Result= %d",result);
		break;
	}
	case '/':
	{
		result= num1/num2;
		printf("Result= %d",result);
		break;
	}

	}
	return 0;
}
