#include "main.h"

/**
 * helper_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number if it exists,
 * or -1 if not.
 */
int helper_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of the number if it exists, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (helper_sqrt(n, 1));
}

int helper_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (helper_sqrt(n, guess + 1));
}
