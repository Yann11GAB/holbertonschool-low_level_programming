#include "main.h"
#include <stddef.h>
/**
 * _strchr - write a function that locates a character in a string.
 * @s: is a pointer
 * @c: is the character
 * Return: return NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
