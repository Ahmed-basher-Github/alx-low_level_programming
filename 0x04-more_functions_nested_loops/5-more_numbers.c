#include <stdio.h>
#include "main.h"

/**
 * more_numbers - writes the numbers from 1 to 14 ten times
 * Return: nothing function of type void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if ( j > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}

}
