#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format string containing types of arguments to print:
 * c for char, i for int, f for float and s for char pointer (string)
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int idx = 0;
	char *s, *sep = "";

	va_start(args, format);

	if (format)
	{
		while (format[idx])
		{
			switch (format[idx])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					idx++;
					continue;
			}
			sep = ", ";
			idx++;
		}
	}

	printf("\n");
	va_end(args);
}

