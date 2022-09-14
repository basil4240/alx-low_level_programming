#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if c is lowercase character
 * @c: The character to check
 *
 * Returns: 1 if true and 0 otherwise.
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
