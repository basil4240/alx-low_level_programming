#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int b = 10;
	int i;

	for(i = 0; i < b; i++)
	{
		int j;

		for(j = 0; j < b; j++)
		{
			int m = i * j;
			if (m >= b)
			{
				int f = m / 10;
				int l = m % 10;

				_putchar(f + '0');
				_putchar(l + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(m + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
