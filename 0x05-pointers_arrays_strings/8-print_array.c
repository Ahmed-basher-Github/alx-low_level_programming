#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - a function that prints a number of elements in an array
 * @a: the array pointer
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	putchar('\n');



}
