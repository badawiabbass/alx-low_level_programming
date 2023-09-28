#include "main.h"
/**
 * _puts_recursion - function liks puts();
 * @s: input
 * Return: always (0)
 */
void _puts_recursion(char *s);
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	els
		_putchar('\n');
}
