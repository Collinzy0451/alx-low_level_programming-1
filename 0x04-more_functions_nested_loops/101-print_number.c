#include "main.h"
/**
 * print_number - prints an integer
 * @n: the interger to be printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int xyz = n;

	if (n < 0)
	{
		_putchar('_');
		xyz = -xyz;
		if ((xyz / 10) > 0)
			print_number(xyz / 10);
		_putchar((xyz % 10) + '0');
	}
}
