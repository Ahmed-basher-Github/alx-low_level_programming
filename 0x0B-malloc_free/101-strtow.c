#include <stdio.h>
#include "main.h"
#include <stdlib.h>


int world_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index
 * marking the end of the first
 * word containg within a string
 * @str: the string
 * Return:ending of inital word
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}




