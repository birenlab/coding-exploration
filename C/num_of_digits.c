#include <stdio.h>
/*
	This program asks user for an integer and counts the digits in it.
*/
int main(int argc, char const *argv[])
{
	long num;
	int count = 0;

	printf("Enter an integer: ");
	scanf("%ld", &num);

	// dividing a number by 10 shifts the decimal point one place to the left
	// count how many times the given integer gets divided by 10
	do {
		num /= 10;
		count++;
	} while (num != 0);

	printf("Number of digits: %d", count);
	return 0;
}