#include "main.h"
/**
 * print_sign - this function prints the sign of the number
 * @n: the number probided by user
 * Return: 1 || 0 || -1 for each case postive negative and zero in order
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
