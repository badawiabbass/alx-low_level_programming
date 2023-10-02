#include <stdio.h>

/**
 * main - prints number and follow by a new line into it 
 * @argc: type int argument
 * @argv: tupe char argument of strings into it 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n",argc - 1);
	return (0);
}
