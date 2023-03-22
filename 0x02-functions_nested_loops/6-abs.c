#include "main.h"

/**
 * _abs - function that retrun the absolute value of number
 *
 * @n : input number
 *
 * Return: 0 (Success)
 */

int _abs(int n)

{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
