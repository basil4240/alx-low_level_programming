#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a n.
 * @n: The number of which last degit is to be printed.
 *
 * Return: the value of the last digit of n.
 */
int print_last_digit(int n)
{
	int m, last_digit, abs_digit;

	m = INT_MIN;
	abs_digit = abs(n);
	last_digit =  abs_digit % 10;


	if (n == m)
	{
		_putchar(last_digit + '0');
		return (8);
	}

	_putchar(8 + '0');
	return (last_digit);
}
