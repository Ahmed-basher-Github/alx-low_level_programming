#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the letter to search for
 * Return: char to string if found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
