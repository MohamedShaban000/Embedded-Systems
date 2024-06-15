/*
 * pb1.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed shaban
 */

#include <stdio.h>


int main(void)
{
	unsigned short num,height,min_width,temp;
	scanf("%hu %hu",&num,&height);
	min_width=num;
	while(num--)
	{
		scanf("%hu",&temp);
		if(temp>height)		min_width++;
	}
	printf("%hu",min_width);
	return 0;
}
