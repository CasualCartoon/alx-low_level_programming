#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestPrimeFactor = -1;
	long factor = 2;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			largestPrimeFactor = factor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
		factor++;
	}

	printf("%ld\n", largestPrimeFactor);

	return (0);
}
