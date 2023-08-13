//checking whwther the year is leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("\n enter the year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
		printf("its a leap year");
		else
		printf("its not a leap year");
		
	}
	else 
	{
		if(year%4==0)
		printf("the year is a leap year");
		else
		printf("the year is not a leap year");
		
	}
	return 0;
}
