#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function generates and prints the first 50 Fibonacci
 * numbers separated by commas and a space, starting with 1 and 2.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	long a = 1, b = 2, temp;
	int count = 0;

	printf("%ld, %ld, ", a, b);
	count += 2;

	while (count < 50)
	{
		temp = a + b;
		a = b;
		b = temp;

		if (count == 49)
			printf("%ld\n", temp);
		else
			printf("%ld, ", temp);

		count++;
	}

	return (0);
}
