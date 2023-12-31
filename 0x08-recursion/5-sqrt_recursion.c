#include <stdio.h>
#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n:the int to find the sqrt of
 * Return:int the sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));

}
/**
 * actual_sqrt_recursion - to find natural sqrt
 * @n: int n to cal the sqrt of
 * @i: itter
 *
 * Return: sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
