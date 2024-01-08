#include"main.h"

/**
 *  _isalpha - chrcks if the entred param is alphabet
 *  @c: entered integer
 *  Return: 1 if c a letter
 *  0 otherwise
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
