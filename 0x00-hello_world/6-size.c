#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %1u byte(s)\n", sizeof(char));
	printf("Size of a int: %1u byte(s)\n", sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1u byte(s)\n", sizeof(long long int));
	printf("Size of a float", sizeof(float));
	return (0);
}
