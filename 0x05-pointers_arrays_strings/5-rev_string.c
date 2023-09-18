#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to reverse
 * Return:nothing function is of type void
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
