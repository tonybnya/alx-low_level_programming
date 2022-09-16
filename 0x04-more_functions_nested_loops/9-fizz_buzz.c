#include <stdio.h>

/**
 * main - Entry point
 * FizzBuzz test function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int start;
	int end;

	c = ' ';
	start = 1;
	end = 100;

	while (start <= end)
	{
		if ((start % 3 == 0) && (start % 5 == 0))
		{
			printf("FizzBuzz%c", c);
		}
		else if (start % 3 == 0)
		{
			printf("Fizz%c", c);
		}
		else if (start % 5 == 0)
		{
			printf("Buzz%c", c);
		}
		else
		{
			printf("%d%c", start, c);
		}

		start += 1;
	}
	printf("\n");

	return (0);
}
