#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - divids a string into two halfs
 * @str: the string
 * Return:nothing function of type void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');

}
