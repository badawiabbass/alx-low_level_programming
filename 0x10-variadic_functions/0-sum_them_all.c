#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments passed into it
 *
 * @n: number of arguments
 * Return: integer result or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0) 
	{
        return 0;
	}

    int sum = 0;
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) 
    {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}
