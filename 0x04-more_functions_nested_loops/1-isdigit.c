#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: the digit to check
 * Return: 0 || 1 acording to the check
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);

}

