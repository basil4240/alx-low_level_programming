#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i;
	for (i = 0; i < 1440; i++)
	{
		int h, m;
		char h1, h2, m1, m2;

		h = i/60;
		m = i%60;

		if (h < 10)
		{
			h1 = '0';
			h2 = h + '0';
		}
		else
		{
			h1 = (h/10) + '0';
			h2 = (h%10) + '0';
		}

		if (m < 10)
                {
                        m1 = '0';
                        m2 = m + '0';
                }
                else
                {
                        m1 = (m/10) + '0';
                        m2 = (m%10) + '0';
                }


		_putchar(h1);
		_putchar(h2);
		_putchar(':')
		_putchar(m1);
		_putchar(m2);
		_putchar('\n');
	}
}
