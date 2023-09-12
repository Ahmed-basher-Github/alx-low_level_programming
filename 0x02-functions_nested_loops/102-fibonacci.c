#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 
 */
int main(void)
{
	int n = 50, i;
	long long int fib[n];

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%lld, ", fib[i]);
	}

	return (0);
}
