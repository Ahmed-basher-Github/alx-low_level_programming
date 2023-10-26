#include "main.h"
/**
 * flip_bits - returns number of bits needed to be
 * flipped tp get from one number to another
 * @n: first number.
 * @m:second number.
 * Retrun: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
