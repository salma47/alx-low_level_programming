#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: the string to be reversed
*/

void print_rev(char *s)
{
	int i, len;

	 len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
