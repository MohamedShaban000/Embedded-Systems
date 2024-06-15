
/*
 * pb2.c
 *
 *  Created on: Jun 12, 2024
 *      Author: Mohamed shaban
 */



#include <stdio.h>

int main(void)
{
	char ch;
	unsigned long games,aw=0,dw=0,i;
	scanf("%lu",&games);
	for(i=0;i<games;i++)
	{
		scanf("%c",&ch);
		if(ch=='A')			aw++;
		else if(ch=='D')	dw++;
	}
	if(aw>dw)		printf("Anton");
	else if(aw<dw)	printf("Danik");
	else			printf("Friendship");
	return 0;
}













/*
#include <stdio.h>


int main(void)
{
	unsigned long games, Aw=0, Dw=0;
	scanf("%lu",&games);
	char ch;
	while(games--)
	{
		scanf("%c",&ch);
		(ch=='A')?Aw++:Dw++;
	}
	if(Aw==Dw)		printf("Friendship");
	else			(Aw>Dw)?printf("Anton"):printf("Danik");
	return 0;
}
*/
