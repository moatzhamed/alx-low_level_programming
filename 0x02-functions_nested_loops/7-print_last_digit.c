#include "main.h"

/**
 * print_last_digit - function print the last digit in the input number
 *
 * @n : input number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = (-1) * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
