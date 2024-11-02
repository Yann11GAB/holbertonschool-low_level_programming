#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse.
 * @s: is a string
 */
void print_rev(char *s)

{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (y >= 0)
	{
		_putchar(s[y]);
		y--;
	}

	_putchar('\n');
}
