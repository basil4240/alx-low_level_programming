#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: Start point
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != n)
		{
			_putchar(',');
		}
		if (i >= 10)
		{
			int f = i / 10;
			int l = i % 10;

			_putchar(f + '0');
			_putchar(l + '0');
		}
		else
		{
			_putchar(i + '0');
		}
	}
}
