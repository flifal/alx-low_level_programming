#include "main.h"

/**
 * print_alphabet_x10 - function for print alphabet ten times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
