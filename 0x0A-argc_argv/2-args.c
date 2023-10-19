#include <stdio.h>

/**
 * main - prints all arguments it receives follow by a new line.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: none
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
