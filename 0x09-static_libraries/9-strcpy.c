#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination where the string will be copied to
 * @src: the source string to be copied
 * Return: the copied string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}

	dest[a] = '\0';

	return (dest);
}
