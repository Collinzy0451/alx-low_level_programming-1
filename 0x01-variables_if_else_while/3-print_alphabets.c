#include <stdio.h>
/**
 *main - entry path
 *Return: 0 (success)
 */

int main(void)
{
int v;

	for (v = 0; v < 26; v++)
	{
		putchar('a' + v);
	}
	for (v = 0; 1 < 26; v++)
	{
		putchar('A' + v);
	}
	putchar ('\n');
	return (0);
}
