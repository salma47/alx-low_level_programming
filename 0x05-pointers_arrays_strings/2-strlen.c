#include"main.h"

/**
 *_strlen - return the number of char in the string
 *
 *@s: the string to be counted
 *Return: integer
*/

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}
