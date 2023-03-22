#include "main.h"

/**
 * print_alphabet_x10 - print using _putchar function for a-z print 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
