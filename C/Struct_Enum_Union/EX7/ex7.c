/*
 * ex7.c
 *	sorting employees array with nested structure
 *  Created on: May 10, 2024
 *  Author: Mohamed Shaban
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>


struct SDate{
	int m_Day;
	int m_Month;
	int m_Year;
};

struct SEmployee{
	char m_Name[50];
	struct SDate m_Birth_Date;
	struct SDate m_Graduation_Date;
	int m_salary;
};

struct SEmployee x[100];
int count=0;


struct SDate* read_Date(char* s)
{
	static struct SDate date;
	printf("Enter Empolyee's %s date (Day/Month/Year) ex (17/12/1998):",s);
	fflush(stdout);
	scanf("%d/%d/%d",&date.m_Day,&date.m_Month,&date.m_Year);
	return &date;
}

void read_Employees()
{
	char ch, first_name[20], second_name[20];
	do{
		printf("Enter employee first name:");
		fflush(stdout);
		scanf("%s",first_name);
		printf("Enter employee second name:");
		fflush(stdout);
		scanf("%s",second_name);
		strcpy(x[count].m_Name,first_name);
		strcat(x[count].m_Name," ");
		strcat(x[count].m_Name,second_name);
		x[count].m_Birth_Date = *(read_Date("birth"));
		x[count].m_Graduation_Date = *(read_Date("graduation"));
		printf("Enter employee's salary:");
		fflush(stdout);
		scanf("%d",&x[count].m_salary);
		++count;
		if(count==100)	break;
		printf("If you want to add more employees put y else put n:");
		fflush(stdout);
		scanf("\n");
		scanf("%c",&ch);
	}while(ch=='y');
}

void sort_Employees(void)
{
	int i,j;
	struct SEmployee Temp;
	for(i=0;i<count-1;i++)
		for(j=i+1;j<count;j++)
		{

			if(  (x[i].m_Graduation_Date.m_Year > x[j].m_Graduation_Date.m_Year)
			  ||( x[i].m_Graduation_Date.m_Year == x[j].m_Graduation_Date.m_Year
			     && x[i].m_Graduation_Date.m_Month > x[j].m_Graduation_Date.m_Month)
			  || (x[i].m_Graduation_Date.m_Year == x[j].m_Graduation_Date.m_Year
				 && x[i].m_Graduation_Date.m_Month == x[j].m_Graduation_Date.m_Month
				 && x[i].m_Graduation_Date.m_Day > x[j].m_Graduation_Date.m_Day) )
			{
				Temp = x[i];
				x[i] = x[j];
				x[j] = Temp;
			}

		}
}

void print_employee(struct SEmployee* x)
{
	printf("%s\t%d/%d/%d\t%d/%d/%d\t%d\n",
			x->m_Name,
			x->m_Birth_Date.m_Day,
			x->m_Birth_Date.m_Month,
			x->m_Birth_Date.m_Year,
			x->m_Graduation_Date.m_Day,
			x->m_Graduation_Date.m_Month,
			x->m_Graduation_Date.m_Year,
			x->m_salary
	);
	fflush(stdout);
}

int main(void)
{
	int i;
	read_Employees();
	printf("Before sorting:\n");
	for(i=0;i<count;++i)
		print_employee(&x[i]);
	sort_Employees();
	printf("After sorting:\n");
	for(i=0;i<count;++i)
		print_employee(&x[i]);
	return 0;
}
