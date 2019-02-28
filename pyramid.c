#include<stdio.h>
void main()
{
	int i,j,limit;
	printf("enter the limit");
	scanf("%d", &limit);
	for(i=limit;i>=1;i--)
	{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
	}
}
