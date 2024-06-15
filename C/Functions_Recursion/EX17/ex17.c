/*
 * ex17.c
 *	Function to reverse words in a string
 *  Created on: Jan 18, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

void reverse_string_words();

int main(void)
{
	printf("Input: ");
	fflush(stdout);		fflush(stdin);
	reverse_string_words();
	return 0;
}

void reverse_string_words()
{
	char ch, str[100][100];
	int i=0,j=0;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='\n')		break;
		else if(ch==' ')
		{
			i++;		j=0;
		}
		else	str[i][j++]=ch;
	}
	for(j=i;j>=0;j--)
	{
		printf("%s ",str[j]);
		fflush(stdout);		fflush(stdin);
	}
}
