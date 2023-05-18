#include <stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter a number to find factorial:");
	scanf("%d",&n);
	if(n<0)
	printf("invalid number");
	for(i=1;i<=n;i++)
	fact*=i;
	printf("fact is %d",fact);
	return 0;
}