#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The input string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	while (s[length] != '\0')
	{
		length++;
	}

	i = 0;
	j = length - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}

	return (1);
}
