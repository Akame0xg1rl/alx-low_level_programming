#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 *
 * @b: size of the memory
 *
 * Return: pointer;
 **/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
