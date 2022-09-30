#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the number of arguments
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
