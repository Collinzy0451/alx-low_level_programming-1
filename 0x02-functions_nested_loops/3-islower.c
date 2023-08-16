#include "main.h"
/**
 * _islower - shows 1 if the input is a Lowercase character. Another case, shows 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for Lowercase character, 0 for th rest
 */
int _islower(Int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
