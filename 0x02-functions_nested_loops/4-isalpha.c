#include "main.h"
/**
 * _isalpha - a dunction that checks for alphabet chars
 * @c: the char checked by the function
 * Return: int 0 ||
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
