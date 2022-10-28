#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @x: The input number to check
 *
 * Return: int.
 */ 


int print_last_digit(int x)
{
	int y = x % 10;

	_putchar(y);
	return (y);

}
