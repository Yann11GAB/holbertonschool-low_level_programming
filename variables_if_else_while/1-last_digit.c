#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
lastdigit = n % 10;

if (lastdigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastdigit == 0)
{
printf("and is 0\n");
}
printf("and is less than 6 and not 0\n");
return (0);
}
