#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to be used
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != 0)
	{
		a = _strlen_recursion(s + 1);
		return (++a);
	}
	return (a);
}
