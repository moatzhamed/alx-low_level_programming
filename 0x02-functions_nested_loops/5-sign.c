#include "main.h"

/**
 * print_sign - function print the sign of the input number
 *
 * @n : input number
 *
 * Return: 1 & prints '+' if n > zero,0 &  prints '0' if n = zero
 * -1 & prints '-' if n < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
