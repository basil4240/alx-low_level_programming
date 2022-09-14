#include "main.h"

/**
 * print_last_digit - prints the last digit of a n.
 * @n: The number of which last degit is to be printed.
 *
 * Return: the value of the last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
