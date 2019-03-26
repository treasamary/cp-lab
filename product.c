#include<stdio.h>
float multi(int x,float y);
void main()
{
	int x;
	float y,z;
	printf("enter  the int number and float number ");
	scanf("%d%f",&x,&y);
	z=multi(x,y);
	printf("product is %f",z);
}
	float multi(int x,float y)
{
	float z;
	z=x*y;
	return z;
}




















