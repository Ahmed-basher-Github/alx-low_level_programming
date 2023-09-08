#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
