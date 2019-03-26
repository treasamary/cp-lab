#include<stdio.h>
float sum(int mark1,int mark2,int mark3);
void main()
{
	int mark1,mark2,mark3,total;
	float average,percentage;
	printf("enter the mark1");
	scanf("%d",&mark1);
	printf("enter the mark2");
	scanf("%d",&mark2);
	printf("enter the mark3");
	scanf("%d",&mark3);
	sum(mark1,mark2,mark3);
}
float sum(int mark1,int mark2,int mark3)
{
	int sum;
	float average,percentage;
	sum=mark1+mark2+mark3;
	average=sum/3;
	percentage=(sum*100)/300;
	printf("sum=%d",sum);
	printf("average=%f",average);
	printf("percentage==%f",percentage);
}
	


	
	

	
	
	
	


