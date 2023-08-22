#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: parametre
 * Return: 0
 */
void rev_string(char *s)
{
	int i, counter = 0;
	char T;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter / 2; i++)
	{
		T = s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = T;
	}
}
