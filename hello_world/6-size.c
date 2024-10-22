#include <stdio.h>
/**
 * main - main block
 * Size of a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 4 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
