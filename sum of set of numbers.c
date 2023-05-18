
#include<stdio.h>
int main()
{
	int n,i,sum=0;
		printf("enter number of elements in a set:\n");
	scanf("%d",&n);
	int set[n];
	printf("enter set of numbers:\n");
for(i=0;i<n;i++)
{

    scanf("%d",&set[i]);
    sum=sum+set[i];
    
}
    printf("sum of %d is %d\n",i,sum);
   return 0;
}