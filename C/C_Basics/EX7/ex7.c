/*
 * ex7.c
 *  Description: Swap Two Numbers without temp variable.
 *  Created on: Jan 2, 2024
 *  Author: Mohamed Shaban
 */


#include<stdio.h>

int main()
{
	printf("Enter value of a: ");
	fflush(stdout);			fflush(stdin);
	int a=0,b=0;
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&b);

	/*First Solution
	a=a+b;
	b=a-b;
	a=a-b;
	*/

	//Second Solution
	a=a^b;
	b=a^b;
	a=a^b;

	printf("Value of a= %d\n",a);
	printf("Value of b= %d\n",b);
	return 0;
}
