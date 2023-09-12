#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: returns 0 Always
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);

}
/**
 * print_alphabet - a function that prints the alphabet
 *
 * Return: void function returns nothing
 */
void print_alphabet(void)
{
	const char abces[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (abces[i] != '\0')
	{
		putchar(abces[i]);
		i++;
	}
	putchar('\n');
}
