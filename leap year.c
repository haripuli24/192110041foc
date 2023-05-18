#include<stdio.h>
int main()
{
	int year,num;
	printf("enter a year");
	scanf("%d" ,&year);
	if(num%4 == 0)
	printf("year is leap");
	else
	printf("enter year is not leap");
	return 0;
}