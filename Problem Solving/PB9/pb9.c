/*
 * pb9.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */



#include <stdio.h>
#include <string.h>

int main(void)
{
	int upr=0,lwr=0,i=0;
	char ch,str[100];
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='\n')	break;
		str[i++]=ch;
		if(ch<97)		upr++;
		else			lwr++;
	}
	str[i]=0;
	if(upr>lwr)		strupr(str);
	else			strlwr(str);
	printf("%s",str);
	return 0;
}
