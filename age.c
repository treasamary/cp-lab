#include<stdio.h>
int main()
{
	int ageram,agesyam,ageajay;
	printf("enter three ages");
	scanf("%d%d%d",&ageram,&agesyam,&ageajay);
	
	if((agesyam<ageram)&&(agesyam<ageajay))
		printf("age of syam is small");
	if((ageram<ageajay)&&(agesyam))
		printf("age of ram is small");
	if((ageajay<ageram)&&(ageajay<agesyam))
		printf("age of ajay is small");
}
