#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area pointed
 * @n: pointer
 * @b: constant
 * @s: a memory area
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
