#include "main.h"

/**
 * print_alphabet_x10, prints 10 times the alphabet, in lowercase, 
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	char let;
	int  rep;

	rep = 0;

	while (rep < 10)
	{
		let = 'a';
		while (let <= 'z')
	{
		_putchar(let);
			let++;
		}
		_putchar('\n');
		rep++;
	}
}
