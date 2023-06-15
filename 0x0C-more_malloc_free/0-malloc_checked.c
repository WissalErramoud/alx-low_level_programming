#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size in bytes of the memory block to be allocated
 *
 * Return: Pointer to the allocated memory block
 *         If malloc fails or b is equal to 0, exit with status code 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL || b == INT_MAX)
		exit(98);
	return (ptr);
}
