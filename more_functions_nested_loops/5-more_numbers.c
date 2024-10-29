#include "main.h"
/**
 * more_numbers - Write a function that prints 10 times the numbers 0 to 14.
 * Description: Write a function that prints digits
 */

void more_numbers(void)
{
int c;
int i;
for (i = 0; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 10)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
