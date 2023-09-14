#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that print a stright line
 * @n: number of '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
