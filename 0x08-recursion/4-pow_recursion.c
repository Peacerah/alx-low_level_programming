#include "main.h"

/**
 * _pow_recursion - function to return the power 
 * @x: base input 
 * @y: exponent input
 * Return: return integer for sucess or -1 for failure
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
