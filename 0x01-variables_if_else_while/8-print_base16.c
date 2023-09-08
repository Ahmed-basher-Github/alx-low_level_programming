#include <stdio.h>
/**
 * main - programm entry point
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	const char *hex = "0123456789abcdef";
	int i;

	for (i = 0; hex[i] != '\0'; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');

	return (0);
}
