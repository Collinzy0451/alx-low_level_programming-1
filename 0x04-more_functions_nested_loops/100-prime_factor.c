#include <stdlib.h>
/**
 * main - prints the largest prime num
 * Return: 0
 */
int main(void)
{
	long prime = 612852475143, devisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
				continue;
		}
		for (divisor = 3; divisor < (prime / 2)); divosor + = 2
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("%ld\n", prime);
	return (0);

}
