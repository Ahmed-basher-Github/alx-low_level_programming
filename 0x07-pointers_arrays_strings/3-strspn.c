#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: sub string
 * Return: int length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
