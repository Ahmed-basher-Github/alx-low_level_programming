#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - a function that print numbes from 0 -> 9
 * Retrun: nothing function of type void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');


}
