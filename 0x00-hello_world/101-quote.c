#include <stdio.h>
#include <unistd.h>

/**
 * main - display "Alway the piece of the art is usefull" in console
 * followed by a new line to the standerd error
 * Return: 1 and exit the program
 */
int main(void)
{
	write(2, "Alway the piece of the art is usefull\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
