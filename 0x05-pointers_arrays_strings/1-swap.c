#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two ints
 * @a: the first int
 * @b: the second int
 * Return: nothing the function is of type void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
