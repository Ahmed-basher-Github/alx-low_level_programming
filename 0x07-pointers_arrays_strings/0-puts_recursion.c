#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * a function that prints a string, followed by a new line.
 * @s: the string to print
 * Return:nothing function is of type void
 */
void _puts_recursion(char *s)
{
	int len = strlen(s);
	
	if (len > 0)
		puts(s) + _puts_recursion(s);
	
}
