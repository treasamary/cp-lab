#include<stdio.h>
 int main()
{
	int time;
	printf("enter the time required for the worker");
	scanf("%d",&time);
	if((time>=2)&&(time<=3))
		printf("the worker is highly efficiency");
	else if((time>=4)&&(time<=5))
		printf("the worker must be improved");
	else if((time>=4)&&(time<=5))
		printf("the worker is given traing to improve speed");
	else
		printf("the worker must leave the company");
}
