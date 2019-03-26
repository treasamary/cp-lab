#include<stdio.h>
void binary(int number);
void main()
	{
		int number;
		printf("enter the number");
		scanf("%d",&number);
		binary(number);
	}
void binary(int number)
	{
		int count=1,remainder,binary=0;
		while(number!=0)
		{
			remainder=number%2;
			binary=binary+(remainder*count);
			count=count*10;
			number=number/2;
		}
		printf("binary value is %d",binary);
	}
