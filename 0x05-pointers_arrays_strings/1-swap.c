#include "main.h"
/**
 * swap_int - function that swaps int
 * @a: int
 * @b: int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
