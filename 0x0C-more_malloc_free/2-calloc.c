#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of `nmemb`
 * elements of `size` bytes each.
 *
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: If successful, returns a void pointer
 * to the allocated memory. Otherwise, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);
	return (arr);
}
