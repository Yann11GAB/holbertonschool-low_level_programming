#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s : string
 */
void rev_string(char *s)
{
int y = 0;
int i = 0;
char temp;

while (s[y] != '\0')
{
y++;
}
for (i = 0; i < y / 2; i++)
{
temp = s[i];
s[i] = s[y - 1 - i];
s[y - 1 - i] = temp;
}
}
