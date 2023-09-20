#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - a function that copyes strings
 * @dest: the destnation string
 * @src: the source string
 * @n: the number of chars to copy
 * Return: char the copyed string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = strncpy(dest, src, n);

	return (ptr);


}

