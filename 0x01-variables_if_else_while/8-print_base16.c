#include <stdio.h>
/**
 * main - point of entry
 * Return: 0 (success)
 */

int main(void)
{
	int s;

	char t;

	for (s = 0; s  <= 9; s++)
	{
		putchar((s % 10) + '0');
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
