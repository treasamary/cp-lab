#include<stdio.h>
void main()
{
	int number,remainder,octal=0,i;
	printf("enter the number");
	scanf("%d",&number);
	i=1;
	while(number>0)
	{
		remainder=number%8;
		number=number/8;
		octal=octal+(remainder*i);
		i=i*10;
	}
	printf(" octal equivalent is %d",octal);
}
	
