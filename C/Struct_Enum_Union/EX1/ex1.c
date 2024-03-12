/*
 * ex1.c
 *	Store information of student (name, roll, marks) using struct
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */


typedef struct Sstudent{
	char name[50];
	int roll;
	float marks;
}Sstudent;

Sstudent student;

#include <stdio.h>

int main(void)
{
	printf("Enter information of student:\n");
	fflush(stdout);		fflush(stdin);
	printf("Name:");
	fflush(stdout);		fflush(stdin);
	scanf("%s", (char*)&student.name);
	printf("Roll Number:");
	fflush(stdout);		fflush(stdin);
	scanf("%d", &student.roll);
	printf("Marks:");
	fflush(stdout);		fflush(stdin);
	scanf("%f", &student.marks);
	printf("Displaying information:\n");
	fflush(stdout);		fflush(stdin);
	printf("Name: %s\n",student.name);
	fflush(stdout);		fflush(stdin);
	printf("Roll Number: %d\n", student.roll);
	fflush(stdout);		fflush(stdin);
	printf("Marks: %f\n", student.marks);
	fflush(stdout);		fflush(stdin);
	return 0;
}
