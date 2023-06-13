#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *strdest;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	strdest = malloc(sizeof(char) * (i + 1));

	if (strdest == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		strdest[j] = str[j];

	return (strdest);
}
