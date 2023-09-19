#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */

int main(void)
{
    int sum = 0;
    int index = 0;
    int diff_half1, diff_half2;
    char password[100];

    srand(time(NULL));

    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index++];
    }

    password[index] = '\0';

    if (sum != 2772)
    {
        diff_half1 = (sum - 2772) / 2;
        diff_half2 = (sum - 2772) / 2;

        if ((sum - 2772) % 2 != 0)
            diff_half1++;

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half2))
            {
                password[index] -= diff_half1;
                break;
            }
        }

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half2))
            {
                password[index] -= diff_half2;
                break;
            }
        }

        printf("%s", password);
    }

    return (0);
}
