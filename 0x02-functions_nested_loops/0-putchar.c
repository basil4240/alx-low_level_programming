#include <unistd.h>
#include <string. h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;
	char characters[8] = "_putchar";

	for(i = 0; i < strlen(characters); i++)
	{
		_putchar(characters[i]);
	}

	_putchar('\n');

	return(0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

