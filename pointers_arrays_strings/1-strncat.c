#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: Source string
 * @dest: Destination string
 * @n: Maximum number of bytes to use from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int y = 0;

while (dest[i] != '\0')
{
i++;
}
while (y < n && src[y] != '\0')
{
dest[i] = src[y];
i++;
y++;
}
if (y < n)
{
dest[i] = '\0';
}
return (dest);
}
