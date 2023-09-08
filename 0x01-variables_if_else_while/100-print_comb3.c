#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		putchar('0' + (i / 10));
		putchar('0' + (i % 10));
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
