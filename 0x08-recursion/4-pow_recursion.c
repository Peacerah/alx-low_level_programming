#include "main.h"

/**
 * _pow_recursion - funtion to return the power of a number
 * @x: base input 
 * @y: exponent input
 * @power: ouput
 * Return: return integer for sucess or -1 for failure
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
