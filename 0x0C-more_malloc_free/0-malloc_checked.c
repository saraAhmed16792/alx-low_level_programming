#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: ptr to the array or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *mallo = malloc(b);

	if (mallo == 0)
		exit(98);

	return (mallo);
}
