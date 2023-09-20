#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - a function that reverses an array
 * @a: the array
 * @n: number of elements in array
 * Return:nothing funtion is of type void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}




}
