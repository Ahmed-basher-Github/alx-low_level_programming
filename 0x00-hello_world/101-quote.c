#include <stdio.h>
#include <unistd.h>
/**
 * main - Begining of the program
 *
 * Return: returns 1
 */
int main(void)
{
	char newline = '\n';

	write(2,
	"and that piece of art is userful\" - Dora Korpar, 2015-10-19\n", 59);

	write(STDOUT_FILENO, &newline, 1);
	write(STDOUT_FILENO, &newline, 1);
	return (1);

}
