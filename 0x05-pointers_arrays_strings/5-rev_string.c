#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: parametre
 * Return: 0
 */
void rev_string(char *s)
{
	int i, lenght = 0;
	char R;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i <  lenght  / 2; i++)
	{
		R = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = R;
	}
}
