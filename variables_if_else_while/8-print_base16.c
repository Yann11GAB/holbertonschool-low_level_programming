#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: Always 0 if succeed.
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
putchar(n + 0);

for (n = 'a'; n <= 'f'; n++)
putchar(n);

putchar('\n');
return (0);
}
