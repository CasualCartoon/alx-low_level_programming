#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		write(1, &num, 1);

		if (num != '9')
		{
			write(1, ", ", 2);
		}

		num++;
	}

	write(1, "\n", 1);

	return (0);
}
