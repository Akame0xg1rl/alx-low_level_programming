#include "main"
/**
 * print_alphabet_x10 in lowercase,
 * follow by new line,
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	char let;
	int  l;
	 
	l = 0;

	while (l < 10)
	{
		let = 'a';
		while (let <= 'z')
	{
		_putchar(let);
			let++;
		}
		_putchar('\n');
		l++;
	}
}
