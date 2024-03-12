/*
 * ex3.c
 *	Adding two complex numbers by passing structure to function
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */


struct Scomplex{
	float real;
	float imag;
}complex1, complex2, sum_complex;

struct Scomplex add_complex(struct Scomplex cmplx1, struct Scomplex cmplx2);

#include <stdio.h>

int main(void)
{
	printf("For 1st complex number:\n");
	fflush(stdout);		fflush(stdin);
	printf("Enter real and imaginary respectively:");
	fflush(stdout);		fflush(stdin);
	scanf("%f%f",&complex1.real, &complex1.imag);
	printf("For 2nd complex number:\n");
	fflush(stdout);		fflush(stdin);
	printf("Enter real and imaginary respectively:");
	fflush(stdout);		fflush(stdin);
	scanf("%f%f",&complex2.real, &complex2.imag);
	sum_complex= add_complex(complex1, complex2);
	printf("Sum = %.2f+%.2fi", sum_complex.real, sum_complex.imag);

}

struct Scomplex add_complex(struct Scomplex cmplx1, struct Scomplex cmplx2)
{
	struct Scomplex sum;
	sum.real = cmplx1.real + cmplx2.real;
	sum.imag = cmplx1.imag + cmplx2.imag;
	return sum;

}
