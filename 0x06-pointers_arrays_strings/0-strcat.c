#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Destination String.
 */
char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int srclen = 0;
	int i;
	
	for (i = 0 ; dest [i] != '\0' ; i++)
		deslen++;
	for (i = 0 ; src [i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[deslen+i] = src[i];
	return (dest);
}
