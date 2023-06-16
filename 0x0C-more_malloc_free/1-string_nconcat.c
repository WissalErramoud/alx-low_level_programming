#include <stdlib.h>
#include <limits.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates n characters from s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate
 *
 * Return: pointer to concatenated string (s1 + n characters of s2)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < strlen(s2))
		str = malloc(strlen(s1) + n + 1);
	else
		str = malloc(strlen(s1) + strlen(s2) + 1);

	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strncat(str, s2, n);

	return (str);
}
