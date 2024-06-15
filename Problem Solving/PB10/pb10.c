/*
 * pb10.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>


int main(void)
{
	char str[100];
	scanf("%s",str);
	if(str[0]>=97)		str[0]-=32;
	printf("%s",str);
	return 0;
}
