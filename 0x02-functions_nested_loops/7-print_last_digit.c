#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Ensure n is positive or zero */
    if (n < 0)
        n = -n;

    last_digit = n % 10;
    _putchar(last_digit + '0'); /* Print the last digit */

    return (last_digit);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int result = print_last_digit(88);
    _putchar('\n'); /* Print a newline character */

    return (0);
}
