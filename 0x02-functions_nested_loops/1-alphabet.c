#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 *
 * Return: void function returns nothing
 */
void print_alphabet(void)
{
	const char abces[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (abces[i] != '\0')
	{
		_putchar(abces[i]);
		i++;
	}
	_putchar('\n');
}
