#include "main.h"


/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: nothing the function is of the type void
 */

void print_alphabet_x10(void)
{
	const char abces[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; abces[i] != '\0'; i++)
		{
			_putchar(abces[i]);
		}
		_putchar('\n');
	}
}
