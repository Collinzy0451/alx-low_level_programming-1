#include "main.h"
/**
 * _islower - shows 1 if input is a Lowercase character. Another case, shows 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for Lowercase character, 0 for the rest
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
