#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argunment vector
 * Return: int
 */ 

int main (int argc, char *argv[])
{
	int i;
	
	while (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf( "%c\n", argv[i]);
	}
	return (0);
}
