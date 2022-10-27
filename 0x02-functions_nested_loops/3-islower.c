#include "main.h"

/**
 * int _islower(int c) - main entry to determine if 
 * an alphabet is small letter
 *
 * Return: Always return 1 if true or 0 if otherwise 
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
