#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of arguments
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
