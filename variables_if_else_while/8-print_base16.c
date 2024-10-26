#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: Always 0 if succeed.
 */
int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
if (i < 10)
putchar(i + '0');
else
putchar(i - 10 + 'a');
}
putchar('\n');
return (0);
}
