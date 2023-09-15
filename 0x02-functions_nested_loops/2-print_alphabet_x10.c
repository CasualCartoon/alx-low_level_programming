#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times,
 *                     each followed by a newline.
 */
void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 0; count < 10; count++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}