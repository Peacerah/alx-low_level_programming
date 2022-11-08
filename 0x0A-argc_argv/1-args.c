#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argunment vector
 * Return: int
 */

int main (int argc, char *argv[])
{
	{
		int i = argc - 1;
		printf(" %d\n ", i);
	}
	return (0);
}
