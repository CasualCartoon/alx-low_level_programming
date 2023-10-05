#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: string to duplicate
 *
 * Return: 0
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

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	return (NULL);

	for (int j = 0; str[j] != '\0'; j++)
	duplicate[j] = str[j];

	duplicate[i] = '\0';

	return (duplicate);
}
