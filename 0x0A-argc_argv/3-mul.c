#include "main.h"

/**
 * main - prints the result of the multiplication
 *
 * @argc: argument count
 * @arrv: argument vector
 *
 * Return: 0 if at least two integers arguments, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
