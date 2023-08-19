#include <stdio.h>
/**
 * main - prints the largest prime num
 * Return: 0
 */
int main(void)
{
	long prime = 612852475143, devisor;

	while (devisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		
		{
			prime /= 2;
				continue;
		}
		for (devisor = 3; devisor < (prime / 2); devisor += 2)
		{
			if ((prime % devisor) == 0)
				prime /= devisor;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
