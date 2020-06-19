#include<stdio.h>
void main()
{
	int int_type;
	float f_type;
	double d_type;
	char c_type;

	printf("size of int = %ld",sizeof(int_type));
	printf("\n\nsize of float = %ld ", sizeof(f_type));
	printf("\n\nsize of double = %ld", sizeof(d_type));
	printf("\n\nsize of char = %ld", sizeof(c_type));
}