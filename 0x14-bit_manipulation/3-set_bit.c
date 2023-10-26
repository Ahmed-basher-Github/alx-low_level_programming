#include "main.h"
/**
 *set_bit -  set a certain bit to the value 1.
 *@n:pointer to the bit
 *@index:index of the bit to be setted as 1.
 *Return: int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);

}
