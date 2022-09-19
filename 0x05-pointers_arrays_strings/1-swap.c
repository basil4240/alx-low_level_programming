#include "main.h"

/**
 * swap_int - swap two integers values
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void reset_to_98(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
