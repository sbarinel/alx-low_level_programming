#include "main.h"

/**
  * get_bit - Returns value of a bit at an index in a decimal number
  * @n: Number to Search
  * @index: Index of the bit
  *
  * Description: Function that returns the value of a bit at a given index.
  *
  * Return: the value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
