/*
 * ex4.c
 *	Store information of 3 students (name, roll, marks) using struct
 *  Created on: Mar 12, 2024
 *      Author: Mohamed Shaban
 */


typedef struct Sstudent{
	char name[50];
	int roll;
	float marks;
}Sstudent;

Sstudent student[3];

#include <stdio.h>

int main(void)
{
	int i;
	printf("Enter information of students:\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<3;i++)
	{
		printf("for roll number %d:\n", i+1);
		fflush(stdout);		fflush(stdin);
		printf("Name:");
		fflush(stdout);		fflush(stdin);
		scanf("%s", (char*)&student[i].name);
		printf("Marks:");
		fflush(stdout);		fflush(stdin);
		scanf("%f", &student[i].marks);
	}

	printf("Displaying information:\n");
	for(i=0;i<3;i++)
	{
		printf("for roll number %d:\n", i+1);
		fflush(stdout);		fflush(stdin);
		printf("Name: %s\n",student[i].name);
		fflush(stdout);		fflush(stdin);
		printf("Marks: %f\n", student[i].marks);
		fflush(stdout);		fflush(stdin);
	}
	return 0;
}
