#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that return the length of a string
 * @s: the string
 * Return: an int which is the length of the string
 */
int _strlen(char *s)
{
	int i, count, length;

	count = 0;
	length = strlen(s);

	for (i = 0; i < length; i++)
	{
		count = count + 1;
	}
	return (count);



}
