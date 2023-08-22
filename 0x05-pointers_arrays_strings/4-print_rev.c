#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: char
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, lenght;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	lenght = i;

	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
