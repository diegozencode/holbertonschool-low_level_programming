#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiplies two numbers
 *
 * @argc: integer count arguments
 * @argv: string vector arguments
 *
 * Return: Success or Error
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

}
