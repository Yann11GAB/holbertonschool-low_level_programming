#include "main.h"

/**
 * _strlen -  function is designed to calculate and return the length.
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}