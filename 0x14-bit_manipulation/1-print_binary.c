#include "main.h"
/**
 * print_binary -  prints a binary rep or number.
 * @n:the number
 * Return:noting.
 */
void print_binary(unsigned long int n)
{
	int bitMask = 1 << (sizeof(int) * 8 - 1);
	while (bitMask > 0)
	{
		if (n & bitMask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		bitMask >>= 1;
	}
	printf("\n");
}
