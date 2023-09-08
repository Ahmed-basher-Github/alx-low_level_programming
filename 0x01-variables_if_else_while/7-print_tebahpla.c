#include <stdio.h>
/**
 * main - program entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char *abces = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; abces[i] != '\0'; i++)
	{
		putchar(abces[i]);
	}
	putchar('\n');

	return (0);
}
