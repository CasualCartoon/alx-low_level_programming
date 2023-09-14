#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * This program prints all possible different combinations of two digits.
 * Numbers are separated by ", " followed by a space.
 * The two digits must be different.
 * For example, 01 and 10 are considered the same combination of the digits 0 and 1.
 * The program prints only the smallest combination of two digits.
 * Numbers are printed in ascending order, always with two digits.
 * It uses the putchar function exclusively (other functions like printf, puts, etc., are forbidden).
 * The program limits the use of putchar to five times maximum.
 * Variables of type char are not used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
