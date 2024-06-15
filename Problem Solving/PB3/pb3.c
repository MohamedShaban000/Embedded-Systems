/*
 * pb3.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed shaban
 */

#include <stdio.h>


int main(void)
{
	unsigned short a=4, b=7, years=0;
	scanf("%hu %hu",&a,&b);
	while(a<=b)
	{
		a *= 3;
		b *= 2;
		years++;
	}
	printf("%hu",years);
	return 0;
}
