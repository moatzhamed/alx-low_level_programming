#include "main.h"

/**
 * print_alphabet - print using _putchar function for a-z print
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
