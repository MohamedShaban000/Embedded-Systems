/*
 * ex1.c
 *	Prime numbers between two intervals
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int check_prime(int n);

int main(void)
{
	int n1,n2,i;
	printf("Enter two numbers (Intervals):");
	fflush(stdout);		fflush(stdin);
	scanf("%d%d",&n1,&n2);
	printf("Prime numbers between %d and %d are :",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
		if(check_prime(i))
			printf("%d  ",i);
	}

	return 0;
}
int check_prime(int n)
{
	int i, flag = 1;
	for(i=2;i<n/2;i++)
	{
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
