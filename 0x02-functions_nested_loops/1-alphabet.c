#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s+=1;
	}

	_putchar('\n');

}


