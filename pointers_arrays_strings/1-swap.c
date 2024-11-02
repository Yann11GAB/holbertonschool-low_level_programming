#include "main.h"

/**
 * swap_int - function that swap the value of two integers.
 * @a: pointeur 1
 * @b: pointeur 2
 * Return nothing
 */

void swap_int(int *a, int *b)
{
int y = *a;
*a = *b;
*b = y;
}
