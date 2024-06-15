/*
 * pb4.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>


int main(void)
{
	int problems, solved=0,friend,i,ones=0;
	scanf("%d",&problems);
	while(problems--)
	{
		ones=0;
		for(i=0;i<3;i++)
		{
			scanf("%d",&friend);
			if(friend==1)		ones++;
		}
		if(ones>=2)		solved++;
	}
	printf("%d",solved);
	return 0;
}
