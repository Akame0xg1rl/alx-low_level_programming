#include "main.h"
/**
 * puts2 - function that prints character of a string
 * @str: paremeter
 * Return: 0
 */
void puts2(char *str)
{
	int i, counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
