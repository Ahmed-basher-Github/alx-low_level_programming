#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: char which is the two strings combined
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);
	
	return (ptr);
}
