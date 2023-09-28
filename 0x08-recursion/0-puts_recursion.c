#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: the string to print
 * Return:nothing function is of type void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
