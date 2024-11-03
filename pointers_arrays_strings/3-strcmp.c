#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int y = 0;

while (s1[y] != '\0' && s2[y] != '\0')
{
if (s1[y] != s2[y])
{
return (s1[y] - s2[y]);
}
y++;
}
return (s1[y] - s2[y]);
}
