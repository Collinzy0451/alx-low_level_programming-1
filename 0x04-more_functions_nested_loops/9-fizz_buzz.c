#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if ((y % 3) == 0 && (y % 5) == 0)
			printf("FizzBuzz");
		else if ((y % 3) == 0)
			printf("Fizz");
		else if ((y % 5) == 0)
			printf("Buzz");
		else
			printf("%d", y);
		if (y == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
