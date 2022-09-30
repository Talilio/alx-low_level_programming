#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints its name
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
