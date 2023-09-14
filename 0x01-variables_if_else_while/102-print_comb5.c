#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space, with each number printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = num1; num3 <= 9; num3++)
			{
				/* Start num4 from num1 if num3 is the same as num1 */
				int start = (num3 == num1) ? num2 + 1 : 0;

				for (num4 = start; num4 <= 9; num4++)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');

					/* Check if it's not the last combination */
					if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
