#include<stdio.h>
void main()
{
	int n1 , n2, n3;
	printf("enter three number to find largest among tree numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);

	if((n1 > n2) && (n1 > n3))
		printf("%d is the ls largest.", n1);

	else if((n2 > n1) && (n2 > n3))
		printf("%d is the largest.", n2);

	else
		printf("%d is the largest.", n3);
}
