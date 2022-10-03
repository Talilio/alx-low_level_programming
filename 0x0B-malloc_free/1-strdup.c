#include "main.h"

/**
 * _strlen - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		a = malloc(sizeof(char) * size);
		if (a)
		{
			while (size--)
				a[size] = str[size];

			return (a);
		}
	}
	return (NULL);
}
