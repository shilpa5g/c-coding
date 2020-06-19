#include<stdio.h>
void main()
{
	char c;
	int lowercase, uppercase;
	printf("enter a alphabate: ");
	scanf("%c", & c);

	uppercase = (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u');
	lowercase = (c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (uppercase || lowercase)
		printf("%c is vowel.",c);
	else
		printf("%c is consonant.",c);
}