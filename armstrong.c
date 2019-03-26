#include<stdio.h>
int main()
{
	int i,armstrong=0,remainder,temp;
	for(i=100;i<=500;i++)
	{
		
		temp=i;
		armstrong=0;
		while(temp>0)
			{
			remainder=temp%10;
			armstrong=remainder*remainder*remainder+armstrong;
			temp=temp/10;
			}
	if(i==armstrong)
	printf("\n%d is a armstong number",i);
	}
}




