#include "main.h"

/**
 * flip_bits - Counts Number of BITS to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Description: Function that count Number of BITS to change
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
