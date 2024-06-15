/*
 * pb7.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	char distinct=0,ch, alphabet_freq[26]={0};
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='\n')	break;//wjmzbmr
		if(alphabet_freq[ch-97]++==0)		++distinct;
	}
	(distinct%2==0)?printf("CHAT WITH HER!"):printf("IGNORE HIM!");
	return 0;
}
