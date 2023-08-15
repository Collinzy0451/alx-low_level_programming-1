#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */

int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		putchar(q + '0');
		if (q < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
