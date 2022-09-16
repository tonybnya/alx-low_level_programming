#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	int j;

	c = ' ';
	i = 1;
	j = 100;

	while (i <= j)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz%c", c);
		}
		else if (i % 3 == 0)
		{
			printf("Fizz%c", c);
		}
		else if (i % 5 == 0)
		{
			printf("Buzz%c", c);
		}
		else
		{
			printf("%d%c", i, c);
		}

		i += 1;
	}
	printf("\n");

	return (0);
}
