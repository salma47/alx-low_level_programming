#include"main.h"

/**
 * print_alphabet - function that write the alphabet
 *
 * Description: function that write the alphabet
 *
 * Return: void
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
