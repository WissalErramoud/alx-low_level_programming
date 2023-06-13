#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *strdest;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	strdest = malloc(sizeof(char) * (i + j + 1));

	if (strdest == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		strdest[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		strdest[i] = s2[j];

	}
	strdest[i] = '\0';
	return (strdest);
}
