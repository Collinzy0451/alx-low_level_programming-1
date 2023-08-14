#include <stdio.h>
/**
 * main - point of entry
 * Return: 0 (success)
 */

int main(void)
{
	int m;

	for (m = 0; m < 10 || m < 'g'; m++)
	{
		if (m < 10)
			putchar(m + '0');
		else
			putchar(m);
	}
	putchar('\n');
	return (0);
}
