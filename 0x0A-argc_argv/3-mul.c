#include "main.h"

/**
 * main - prints the result of the multiplication
 *
 * @argc: argument count
 * @arrv: argument vector
 *
 * Return: 1 if no at least two arguments
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
}
