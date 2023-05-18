#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("enter a number a \n");
	scanf("%d",&a);
	printf("enter a number b \n");
	scanf("%d",&b);
    {
	temp=a;
    a=b;
    b=temp;
    printf("after swaping value of a %d\n",a);
    printf("after swaping value of b %d\n",b);
    }
	return 0;
    
	
	
}