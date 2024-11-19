#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - write a function that prints a name.
 * @name: a pointer to a string
 * @f: A pointer to a function that takes a char *
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)

f(name);

return;

}
