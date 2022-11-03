#include "main.h"

/**
 * factorial - function to return the factorial of a number
 * @n: - the input integer
 * Return: return 0 or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
