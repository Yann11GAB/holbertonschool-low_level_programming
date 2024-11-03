#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: Source string
 * @dest: Destination string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int y = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[y] != '\0')
{
dest[i] = src[y];
i++;
y++;
}
dest[i] = '\0';
return (dest);
}
