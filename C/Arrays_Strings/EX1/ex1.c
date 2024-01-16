/*
 * ex1.c
 *	Sum of two matrices of order 2*2
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	int i,j;
	float a[2][2], b[2][2];
	printf("Enter the elements of the first matrix:\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);		fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);		fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum matrix:\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t" ,a[i][j]+b[i][j]);
		}
		printf("\n");
	}



	return 0;
}
