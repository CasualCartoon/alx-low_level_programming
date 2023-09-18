#include <stdio.h>

/**
 * rev_string - Reverses a string.
 *
 * @s: Pointer to a string (an array of characters).
 */
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char temp;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--; /* Move s back to the last character */

	/* Swap characters to reverse the string */
	while (start < s)
	{
		temp = *s;
		*s = *start;
		*start = temp;
		start++;
		s--;
	}
}
