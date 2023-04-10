#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that adds positive numbers.
 * atoi - a function that converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 0; i < argc ; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
