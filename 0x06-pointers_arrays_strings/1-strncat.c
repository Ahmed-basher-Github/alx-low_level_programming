#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of chars to return of src
 * Return: char the two coned strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);



}
