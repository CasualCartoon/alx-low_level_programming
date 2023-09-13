#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num0 = '0';
	int num9 = '9';

	while (num0 <= num9)
	{
		putchar(num0);
		num0++;
	}

	putchar('\n');

	return (0);
}
