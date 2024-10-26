#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * Description: Write a function that prints the last digit of a number.
 * @r: The character to check
 * Return: r if >= 0 , else -r
 */

int print_last_digit(int r)
{
int a = r % 10;
if (a < 0)
{
a = -a;
}
_putchar('0' + a);
return (a);
}
