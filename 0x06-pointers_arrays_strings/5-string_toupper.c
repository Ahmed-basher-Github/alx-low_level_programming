#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>


/**
 *  string_toupper -  a function that changes all
 *  lowercase letters of a string to uppercase.
 *  @s: the string
 *  Return: char uppercase string
*/

char *string_toupper(char *s)
{
	char *or = s;

	while (*s)
	{
		*s = toupper((unsigned char)*s);
		s++;
	}
	return (or);

}
