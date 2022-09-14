#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if c is alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
