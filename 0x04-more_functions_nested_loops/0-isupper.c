#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: variable text
 * Return: 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
