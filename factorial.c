#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i, fact = 1;
	printf("enter a number: ");
	scanf("%d", &num); 

	if(num < 0)
		printf("opps! factorial of negative number doesn't exist");
	else
	{
		for(i = 1; i <= num; i++)
			fact *= i;
	}
	printf("facorial is %d",fact);
}