#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if c is lowercase character
 * @c: The character to check
 *
 * Return: if true 1.
 * If false 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
