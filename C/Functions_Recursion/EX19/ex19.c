/*
 * ex19.c
 *	Sum between to numbers
 *  Created on: Jun 6, 2024
 *      Author: user
 */


#include <stdio.h>

int sum_bet_intervals(int start, int end);

int main(void)
{
	int start,end;
	scanf("%d %d",&start,&end);
	printf("%d",sum_bet_intervals(start,end));
	fflush(stdout);		fflush(stdin);

	return 0;

}

int sum_bet_intervals(int start, int end)
{
	return (end-start+1)*(start+end)/2;
}
