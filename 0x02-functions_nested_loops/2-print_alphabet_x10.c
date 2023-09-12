#include <stdio.h>
/**
 * main - program entry point
 *
 * Retrun: 0 Always
 */


void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: nothing the function is of the type void
 */

void print_alphabet_x10(void)
{
	const char abces[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; abces[i] != '\0'; i++)
		{
			putchar(abces[i]);
		}
		putchar('\n');
	}
}
