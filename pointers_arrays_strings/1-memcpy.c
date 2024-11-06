#include "main.h"
/**
 * _memcpy - function designed to copy a number of bytes from one memory
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is a number
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
