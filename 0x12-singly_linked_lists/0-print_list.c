#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a pointer to the head of the list.
 * Return: the number of nodes in the list_t list.
 */

size_t print_list(const list_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        if (h->str == NULL)
            printf("[0] (null)\n");
        else
        printf("[%d] %s\n", h->len, h->str);
        nodes++;
        h = h->next;    
    }
    return (nodes);
}