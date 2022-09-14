#include <unistd.h>
#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char characters[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(characters[i]);
	}

	_putchar('\n');

	return (0);
}

