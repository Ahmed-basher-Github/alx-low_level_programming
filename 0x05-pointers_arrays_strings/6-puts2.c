#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - a function that prints
 * the first and third an fifth .... char of a string
 * @str: the string
 * Return:nothing
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
