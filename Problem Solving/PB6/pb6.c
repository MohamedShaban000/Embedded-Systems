/*
 * pb6.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>


int main(void)
{
	int cols,i,arr[100],j,temp;
	scanf("%d",&cols);
	for(i=0;i<cols;i++)
		scanf("%d",&arr[i]);
	for(i=cols-1;i>0;i--)
		for(j=i-1;j>=0;j--)
		{
			temp=arr[i];
			while(arr[j]>temp)
			{
				arr[i]++;
				arr[j]--;
			}
		}
	for(i=0;i<cols;i++)
		printf("%d ",arr[i]);
	return 0;
}
