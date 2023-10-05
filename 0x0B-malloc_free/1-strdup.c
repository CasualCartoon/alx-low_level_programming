#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	int i;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	duplicate = (char *)malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
