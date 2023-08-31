#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @number: pointer to the number to change
 * @i: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *number, unsigned int i)
{
	if (i > 63)
		return (-1);

	*number = (~(1UL << i) & *number);
	return (1);
}
