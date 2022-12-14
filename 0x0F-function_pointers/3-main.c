#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int res, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = op(a, b);
	printf("%d\n", res);
	return (0);
}
