#include "main.h"
/**
 * print_bi - prtins the binary rep of a number
 * @n:number
 * Return:noting
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary -  prints a binary rep or number.
 * @n:the number
 * Return:noting.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}
