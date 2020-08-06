#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter a number: ");
	scanf("%d", &num);

	if(num > 0)
		printf("%d is a positive number.",num);
	else if(num < 0)
		printf("%d is a negative number",num);
	else
		printf("zero");
}