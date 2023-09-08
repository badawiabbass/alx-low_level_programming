#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - display if the number is positive, negative or zero
 * Return : return 0 and exit the program
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
