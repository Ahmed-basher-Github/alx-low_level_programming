#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the sting
 * Return: int the lenght
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);

}
