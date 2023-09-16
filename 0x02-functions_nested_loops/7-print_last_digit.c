#include <stdio.h>

/**
 * print_last_digit - Returns the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int number = 88;
	int last_digit = print_last_digit(number);

	printf("Last digit of %d is %d\n", number, last_digit);

	return (0);
}
