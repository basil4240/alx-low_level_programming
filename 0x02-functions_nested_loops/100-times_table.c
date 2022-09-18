#include "main.h"

/**
 * print_times_table - prints the b times table, starting with 0.
 * @b: Number of times
 *
 * Return: void
 */
void print_times_table(int b)
{
        int i;

	if (b < 15 && b > 0)
	{	
        	for (i = 0; i < b; i++)
	        {
	                int j;

	                for (j = 0; j < b; j++)
	                {
                	        int m = i * j;

        	                if (m >= b)
	                        {

                                	int f = m / 10;
                        	        int l = m % 10;

                	                if (m != 0)
        	                        {
	                                        _putchar(',');
                                        	_putchar(' ');
                                	}

                        	        _putchar(f + '0');
                	                _putchar(l + '0');
        	                }
	                        else
        	                {
	                                if (m != 0 || j > 0)
	                                {
	                                        _putchar(',');
	                                        _putchar(' ');
                                        	_putchar(' ');
                                	}
                                	_putchar(m + '0');
                        	}
                	}
                	_putchar('\n');
        	}
	}
}
