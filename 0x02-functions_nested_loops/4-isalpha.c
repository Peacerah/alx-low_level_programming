#include "main.h"

/**
 * _isalpha - function that checks letter 
 *
 * @c: input argumen to check
 *
 * Return: Always int.
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}


