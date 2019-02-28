#include<stdio.h>
int main()
{
	int length,breadth,area,perimeter;
	printf("enter the length");
	scanf("%d",&length);
	printf("enter the breadth");
	scanf("%d",&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
		printf("area is greater ",area,perimeter,length,breadth);
	else
		printf("perimeter is greater",area,perimeter,length,breadth);
	
}
