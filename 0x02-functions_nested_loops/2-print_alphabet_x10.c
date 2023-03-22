#include "main.h"

/**
 * print_alphabet - print using _putchar function for a-z print
 *
 */

 void print_alphabet(void)
{
	int i, ch;
	for (i=1; i<=10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
