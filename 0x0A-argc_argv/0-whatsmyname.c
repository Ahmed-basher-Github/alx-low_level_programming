#include <stdio.h>
/**
 * main - the program starting point
 * @argc: the number of arguments when compiling
 * @argv: a string holding the arguments
 * Return: int => 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
