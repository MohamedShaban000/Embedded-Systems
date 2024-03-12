/*
 * ex6.c
 *	Size of union and size of struct
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */

union job{
	char name[32];
	int age;
	float salary;
}u;

struct job1{
	char name[32];
	int age;
	float salary;
}s;

#include <stdio.h>

int main(void)
{
	printf("Size of union : %lld\n",sizeof(u));
	fflush(stdout);		fflush(stdin);
	printf("Size of struct : %lld\n",sizeof(s));
	fflush(stdout);		fflush(stdin);
	return 0;
}
