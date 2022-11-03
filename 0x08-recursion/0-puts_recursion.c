#include "main.h"

/**
 * _puts_recursion -  function that prints a string
 * @s: input argument string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}