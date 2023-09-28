#include <stdio.h>
#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n:the number to check
 * Return: int 1 || 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - cal if num is prime
 * @n: num to cal
 * @i: itter
 * Return: 1 || 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
