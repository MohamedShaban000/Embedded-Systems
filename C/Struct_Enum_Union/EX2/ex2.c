/*
 * ex2.c
 *	Add to distances (in inch-feet) system using structures
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */


struct Sdistance{
	int feet;
	float inch;
}Distance1, Distance2, Distance3;

#include <stdio.h>

int main(void)
{
	printf("Information of 1st distance:\n");
	fflush(stdout);		fflush(stdin);
	printf("Feet:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&Distance1.feet);
	printf("Inch:");
	fflush(stdout);		fflush(stdin);
	scanf("%f",&Distance1.inch);
	printf("Information of 2nd distance:\n");
	fflush(stdout);		fflush(stdin);
	printf("Feet:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&Distance2.feet);
	printf("Inch:");
	fflush(stdout);		fflush(stdin);
	scanf("%f",&Distance2.inch);
	Distance3.feet = Distance1.feet + Distance2.feet;
	Distance3.inch = Distance1.inch + Distance2.inch;
	if(Distance3.inch>12.0)
	{
		Distance3.inch -= 12.0;
		Distance3.feet++;
	}
	printf("Sum of distances = %d\' - %f\''",Distance3.feet, Distance3.inch);
	return 0;
}
