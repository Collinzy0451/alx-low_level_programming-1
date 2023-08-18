#include "main.h"
/**
 * _isdigit - checks fpr a digit (0 through 9)
 * @c: will be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)

{
	return ((c >= '0') && c <= '9');
}
