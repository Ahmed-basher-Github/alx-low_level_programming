#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: pointer
 * @src: source
 * Return: type char
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');

	return (dest);


}
