#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string
 * Return: A pointer
 */
char *leet(char *str)
{
int y;
int j;
char *leet_chars = "4433007711";
char *leet_letters = "aAeEoOtTlL";

for (y = 0; str[y] != '\0'; y++)
{
for (j = 0; leet_letters[j] != '\0'; j++)
{
if (str[y] == leet_letters[j])
{
str[y] = leet_chars[j];
break;
}
}
}
return (str);
}
