#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it worke, -1 if it didn't
 */

intset_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
