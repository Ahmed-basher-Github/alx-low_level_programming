#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/** malloc_checked -  a function that allocates memory using malloc.
 * @b: the size of memory to be relocated
 * Return: nothing function is of type void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
	


	
}
