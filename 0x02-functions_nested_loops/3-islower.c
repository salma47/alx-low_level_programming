#include"main.h"

/**
 *  _islower - function
 *  @c: the entred param
 *  Description: check if the entred param is lower case
 *  Return: 1 if lowercase
 *          0 otherwise
*/

int _islower(int c)
{
	int i;

	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
