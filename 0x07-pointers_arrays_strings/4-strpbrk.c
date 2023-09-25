#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the set of bytes to search for
 * Return: char the result of the search
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));

}
