#include<stdio.h>//write a program to read marks of a student from keyboard whether the student is pass or fail (using if...else)
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("\n Enter marks from 0-70:");
	scanf("%d",&marks);
	if (marks<23)
	{
		printf("\n sorry ...! You are fail");
	}
	else
	{
		printf("\nCongratulation ...! You are pass");
	}
	getch();
}