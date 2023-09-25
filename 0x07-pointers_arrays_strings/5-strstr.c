#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: the string to search
 * @needle: the string we are searching for
 * Return: char the wearther its found
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
