#include "main.h"
/**
 * set_string - function that sets the value
 * of a pointer to a char
 * @s: double address
 * @to: origine address
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
