/*
 * ex3.c
 *	Transpose of a matrix
 *  Created on: Jan 15, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int i,j,rows,col;
	int a[100][100], b[100][100];
	printf("Enter the size of rows and columns:");
	fflush(stdout);		fflush(stdin);
	scanf("%d%d",&rows,&col);
	printf("Enter the elements of the matrix:\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);		fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t" ,a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d\t" ,b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

