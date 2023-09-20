#include "unistd.h"

/**
 * _putchar - writes the car c to stdout
 * @c the char to write
 * Return: on Success 1
 * on error -1
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
