#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function calculates the sum of even-valued terms in the
 * Fibonacci sequence where the values do not exceed 4,000,000 and prints
 * the result.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	long long int a = 1, b = 2, temp;
	long long int sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		temp = a + b;
		a = b;
		b = temp;
	}

	printf("%lld\n", sum);

	return (0);
}
