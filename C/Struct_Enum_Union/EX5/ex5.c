/*
 * ex5.c
 *	Finding area of a circle, passing arguments to macros
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */


#define PI 3.1415
#define AREA(r) (PI*(r)*(r))

#include <stdio.h>

int main(void)
{
	float rad;
	printf("Enter the radius:");
	fflush(stdout);		fflush(stdin);
	scanf("%f", &rad);
	printf("Area = %.2lf", AREA(rad));
	fflush(stdout);		fflush(stdin);

}
