#include "main.h"
/**
 * _abs - returns the absolute value of a number
 * @c : the number enter by user
 * Return: absolute value of an int
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
