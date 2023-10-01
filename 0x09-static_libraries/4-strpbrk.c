#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Pointer to the first occurrence of a character in accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}

	return ('\0');
}
