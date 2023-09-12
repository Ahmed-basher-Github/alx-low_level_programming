#include <stdio.h>

/**
 * _islower - a function that return 1 if provides letter is lower case
 *@c:the char to check
 * Return: int 0 || 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
