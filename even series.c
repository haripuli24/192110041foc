#include<stdio.h>
int main()
{
	int m;
	printf("enter a number to generate seris");
	scanf("%d" ,&m);
	for(int i=1;i<=m;i++)
	if (i%2==0)
	printf("%d\n",i);
	return 0;
}