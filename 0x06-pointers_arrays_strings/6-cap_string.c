#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int motiv = 0;

	while (str[motiv])
	{
		while (!(str[motiv] >= 'a' && str[motiv] <= 'z'))
			motiv++;

		if (str[motiv - 1] == ' ' ||
		    str[motiv - 1] == '\t' ||
		    str[motiv - 1] == '\n' ||
		    str[motiv - 1] == ',' ||
		    str[motiv - 1] == ';' ||
		    str[motiv - 1] == '.' ||
		    str[motiv - 1] == '!' ||
		    str[motiv - 1] == '?' ||
		    str[motiv - 1] == '"' ||
		    str[motiv - 1] == '(' ||
		    str[motiv - 1] == ')' ||
		    str[motiv - 1] == '{' ||
		    str[motiv - 1] == '}' ||
		    motiv == 0)
			str[motiv] -= 32;

		motiv++;
	}

	return (str);
}
