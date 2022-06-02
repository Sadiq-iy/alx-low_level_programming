#include "main.h"

/**
 * get_bit - Gets the value of a vit at a given index
 * @n: The bit
 * @index: The index to get the value at - indices starts at 0
 *
 * Return: If an error occus - -1
 *  else The value of nit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned ling int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
