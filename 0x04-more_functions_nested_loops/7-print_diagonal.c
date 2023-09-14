#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that prints diagonal spaces
 * @n: the number of spaces
 * Return: nothin function of type void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}



}
