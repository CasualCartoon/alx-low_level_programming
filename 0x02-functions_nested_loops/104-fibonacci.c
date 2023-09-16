#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function calculates and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, separated by a comma and space, followed by
 * a new line. It adheres to the given constraints and uses only standard
 * library functions.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp;
	int count = 0;

	printf("1, 2");

	while (count < 96)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf(", %lu", temp);

		count++;
	}

	printf("\n");

	return (0);
}
