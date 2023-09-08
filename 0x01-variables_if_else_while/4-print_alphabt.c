#include <stdio.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	const char abces = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; abces[i] != '\0'; i++)
	{
		putchar(abces[i]);
	}

	putchar('\n');
	return (0);
}
