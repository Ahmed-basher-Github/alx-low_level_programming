#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - a function that returns weather a number is postive or negatiive
* 
* @n: the number to be determined 
* 
* Return: nothing function of type void 
*/

void positive_or_negative(int n)
{
   
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else
        {
                printf("%d is zero\n", n);
        }
       
}
