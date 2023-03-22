#include "main.h"

/**
 * _isalpha - a function that checks for letter either lower or upper
 *
 * @c: single letter input
 *
 * Return: 1 if c is a letter lowecase or uppercase or 0 otherwise
 */

int _isalpha(int c)

{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
