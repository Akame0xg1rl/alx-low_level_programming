#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: the memory area pointed
 * @n: number of bytes to fill with
 * @b: the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
