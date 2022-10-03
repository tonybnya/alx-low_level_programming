#include "main.h"

/**
 * main - prints the result of the multiplication
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, if at least 3 arguments, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", res);

	return (0);
}
