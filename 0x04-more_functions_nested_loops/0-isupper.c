#include <stdio.h>
#include "main.h"

/**
 * _isupper - a Function  that checks is a char is uppercase
 * @c: the char to check
 * Return: int 0 || 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);

}
