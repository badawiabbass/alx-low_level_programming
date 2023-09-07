#include <unistd.h>
#include <stdio.h>


/**
 * main - deplay "and that piece of art is useful" in consol
 * followed by a new line to the stander error
 * Return: 1 (error).
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
