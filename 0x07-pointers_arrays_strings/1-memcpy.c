#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: char the edited memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));


}
