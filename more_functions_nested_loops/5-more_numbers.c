#include "main.h"
/**
 * more_numbers -  a function that prints 10 times the numbers
 */
void more_numbers(void)
{
char c;
int i;

for (i = 0; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar('1');
_putchar(c % 10 + '0');
}
else
{
_putchar(c + '0');
}
_putchar('\n');
}
}
}
