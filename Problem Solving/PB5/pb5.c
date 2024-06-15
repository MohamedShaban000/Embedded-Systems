/*
 * pb5.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,j,elem,i_th,j_th;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&elem);
			if(elem==1)
			{
				i_th=i;
				j_th=j;
			}
		}
	}
	printf("%d",abs(i_th-2)+abs(j_th-2));
	return 0;
}
