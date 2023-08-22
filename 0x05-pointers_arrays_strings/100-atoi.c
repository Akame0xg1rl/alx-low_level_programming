#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int index = 0;   
	int dashCount = 0; 
	int number = 0;   
	int length = 0;   
	int foundNumber = 0; 
	int currentDigit = 0;

	while (s[length] != '\0')
		length++;
	while (index < length && foundNumber == 0)
	{
		if (s[index] == '-')
			++dashCount;
		if (s[index] >= '0' && s[index] <= '9')
		{
			currentDigit = s[index] - '0';
			if (dashCount % 2)
				currentDigit = -currentDigit;
			number = number * 10 + currentDigit;
			foundNumber = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			foundNumber = 0;
		}
		index++;
	}
	if (foundNumber == 0)
		return (0);
	return (number);
}
