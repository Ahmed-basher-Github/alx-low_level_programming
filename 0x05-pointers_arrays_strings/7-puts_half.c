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
	int len;

	len = strlen(str);

	if (len > 1)
	{
		int split = len / 2;

		printf("%s", str + split);
	}
	putchar('\n');

}
