#include <stdio.h>
#include <ctype.h>

/**
 * main - main entry
 *
 * This program will assign a random number to the variable n each time
 * Return: return 0 (Sucess)
 */



int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);
}
