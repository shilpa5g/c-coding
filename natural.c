#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum= 0,i;
	printf("enter a number: ");
	scanf("%d", &n);

	i = 1;
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("sum is %d",sum);
}	