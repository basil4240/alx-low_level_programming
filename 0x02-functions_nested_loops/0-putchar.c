#include <unistd.h>
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
	char[8] characters = "_putchar";

	for(i = 0; i < sizeof(charaters); i++)
	{
		_putchar(charaters[i]);
	}

	_putchar("\n");

	return(0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

