#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that will prints a name
 * @name: Type of the string name
 * @f: printing the pointer function 
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		exit(EXIT_FAILURE);
	f(name);
}
