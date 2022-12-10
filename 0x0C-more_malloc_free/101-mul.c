#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * mult: function to multiply two positive number
 * @num1 - first number
 * @num2 - second number
 * @mul - output
 * Return - return 0 for sucess
 */

int main(int argc, char argv[])
{
	unsigned int num1 = argv[1];
	unsigned int num2 = argv[2];
	int mul;

	if (argc != 3)
	{
		printf ("Error\n");
		return (98);
	}

	printf ("%d\n", num1*num2);
	return (0);
}
