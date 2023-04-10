#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

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
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc ; i++)
	{
		arg = argv[i];
		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
			printf("Error\n");
			return (1);
			}
		arg++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
