#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
    int i;
    int flag = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = 63; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            _putchar('1');
            flag = 1;
        }
        else if (flag)
            _putchar('0');
    }
}

