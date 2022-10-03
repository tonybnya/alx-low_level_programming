#include "main.h"

/**
 * main - prints the result of the multiplication
 *
 * @argc: argument count
 * @arrv: argument vector
 *
 * Return: 0, if at least 3 arguments, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
