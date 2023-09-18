#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the string to print
 * Retrun: nothing functino is of type void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}

