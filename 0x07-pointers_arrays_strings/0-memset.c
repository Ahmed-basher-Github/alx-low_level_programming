#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory area
 * @b: the byte
 * @n: number of bytes
 * Return: char the memory after filling
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));

}
