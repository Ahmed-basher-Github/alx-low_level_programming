#include "main.h"
/**
 * get_bit - the value of a bit at a given index
 * @n:the number to evaluate
 * @index:the index
 * Return:the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));

}
