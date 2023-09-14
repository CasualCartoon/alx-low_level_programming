#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * Numbers range from 0 to 99 and are printed with two digits.
 * Combinations are separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 < 10; tens1++)
	{
		for (ones1 = 0; ones1 < 10; ones1++)
		{
			for (tens2 = tens1; tens2 < 10; tens2++)
			{
				/* Start ones2 from ones1 if tens2 is the same as tens1 */
				int start_ones2 = (tens2 == tens1) ? ones1 : 0;

				for (ones2 = start_ones2; ones2 < 10; ones2++)
				{
					/* Print the first two-digit number */
					putchar('0' + tens1);
					putchar('0' + ones1);

					/* Print a space to separate the numbers */
					putchar(' ');

					/* Print the second two-digit number */
					putchar('0' + tens2);
					putchar('0' + ones2);

					/* Check if it's not the last combination */
					if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
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
