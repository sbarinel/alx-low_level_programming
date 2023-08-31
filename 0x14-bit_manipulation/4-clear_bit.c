#include "main.h"

/**
 * clear_bit - SETS the value of a given BIT to 0
 * @n: Pointer to Number to change
 * @index: index of bit to clear
 *
 * Description: Function that sets the value of a BIT to 0 at a given Index
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
