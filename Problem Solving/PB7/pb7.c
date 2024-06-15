/*
 * pb7.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100], str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	printf("%d",stricmp(str1,str2));
	return 0;
}
