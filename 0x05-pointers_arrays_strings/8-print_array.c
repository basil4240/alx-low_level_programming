#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			print("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}

	putchar(10);
}
