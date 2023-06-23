#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @sep: separator between strings
 * @n: number of arguments
 * @...: variable arguments list
 *
 * Return: Nothing
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		str = !str ? "(nil)" : str;

		if (!sep || i == 0)
			printf("%s", str);
		else
			printf("%s%s", sep, str);
	}

	printf("\n");

	va_end(args);
}

