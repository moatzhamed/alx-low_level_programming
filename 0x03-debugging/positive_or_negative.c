#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 * positive_or_negative -function for sign of the number
 *
 * Return: Always 0 (Success)
 */
int postitive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	return (0);
}

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}
