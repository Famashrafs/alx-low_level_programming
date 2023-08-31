#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @i: the index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int i)
{
	int bit_val;

	if (i > 63)
		return (-1);

	bit_val = (n >> i) & 1;

	return (bit_val);
}
