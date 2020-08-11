#include<stdio.h>
#include<conio.h>
#include<math.h>
int check_prime(int n);
int check_armstrong(int n);
int main()
{
	int n, flag;
	printf("enter a positive number: ");
	scanf("%d", & n);

    flag = check_prime(n);
	if(flag==1)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);

    flag = check_armstrong(n);
	if(flag == 1)
		printf("%d is an armstrong number.",n);
	else
		printf("%d is not an armstrong number.",n);
	return 0;
}
int checkPrimeNumber(int n) {
   int i, flag = 1, squareRoot;
   squareRoot = sqrt(n);
   for (i = 2; i <= squareRoot; ++i) {
      
      if (n % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int checkArmstrongNumber(int num) {
   int originalNum, remainder, n = 0, flag;
   double result = 0.0;
   for (originalNum = num; originalNum != 0; ++n) {
      originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
   }
   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;
}