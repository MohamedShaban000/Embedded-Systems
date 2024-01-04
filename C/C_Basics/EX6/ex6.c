/*
 * ex6.c
 *  Description: Swap Two Numbers
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int a=0,b=0,temp=0;
	printf("Enter value of a: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Value of a= %d\n",a);
	printf("Value of b= %d\n",b);
	return 0;
}
