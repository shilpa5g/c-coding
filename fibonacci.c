#include<stdio.h>
#include<conio.h>
void main()
{
	int num,t1=0,t2=1,next_term,i;
	printf("enter a number: ");
	scanf("%d", &num);
	printf("fibonacci series: ");

	for(i = 1; i <= num; i++)
	{
		printf("%d,", t1);
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
		
	}
}