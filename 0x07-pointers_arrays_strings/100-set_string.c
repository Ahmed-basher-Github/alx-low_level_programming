#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * set_string -  a function that sets the value of a pointer to a char.
 * @s: pointer
 * @to: the char
 * Return:nothing function is of type void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
