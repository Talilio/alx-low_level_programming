#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if else
 */

int main(int argc, char *argv[])
{
	int  a = argc - 1, b = a - 1, res;

	if (a == 2)
	{
		res = atoi(argv[a]) * atoi(argv[b]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
