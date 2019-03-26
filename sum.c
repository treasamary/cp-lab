#include<stdio.h>
void main()
{
	float n=7,sum=0,i,factorial=1;
	for(i=1;i<=n;i++)
	{
		factorial*=i;
		sum=sum+1/(factorial);
	}
	printf("the sum of 7 terms of the series is %f",sum);
}
	
