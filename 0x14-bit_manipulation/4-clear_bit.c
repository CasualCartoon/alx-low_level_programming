#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify
 * @index: Index of the bit to clear
 *
 * Return: 1 if success, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
