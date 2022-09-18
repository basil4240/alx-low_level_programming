#include <stdlib.h>
#include "main.h"

void oya(int, int);
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Start point to print
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			oya(n, i);
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			oya(n, i);
		}
	}

	_putchar('\n');
}

/**
 * oya - prints out formated numbers using n and i
 * @n: First number
 * @i: Second number
 *
 * Return: void.
 */
void oya(int n, int i)
{
	if (i != n)
	{
		_putchar(',');
		_putchar(' ');
	}

	if (abs(i) >= 10 && abs(i) < 100)
	{
		int f = abs(i) / 10;
		int l = abs(i) % 10;

		if (i < 0)
		{
			_putchar('-');
		}
		_putchar(f + '0');
		_putchar(l + '0');
	}
	else if (abs(i) >= 100)
	{
		int got = abs(i) / 10;
		int f = got / 10;
		int m = got % 10;
		int l = abs(i) % 10;

		if (i < 0)
		{
			_putchar('-');
		}
		_putchar(f + '0');
		_putchar(m + '0');
		_putchar(l + '0');
	}
	else
	{
		if (i < 0)
		{
			_putchar('-');
		}

		_putchar(abs(i) + '0');
	}
}

