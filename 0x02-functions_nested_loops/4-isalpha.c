#include "main.h"

/**
 * _isalpha - functuin that checks if it is a letter 
 *
 * @c: input argumen to check
 *
 * Return: Always int.
 */

int _isalpha(int c)
{

	while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

