#include "main.h"

/**
 *  find_sq - function that returns the natural square root of a number
 *  @y: number that will be used
 *  @x: variable to be used
 *  Return: natural root of @n, -1 if not found
 */

int find_sq(int x, int y)
{

	if ((y * y) == x)
		return (y);

	if (y == x / 2)
		return (-1);

	return (find_sqrt(x, y + 1));

}

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: number to be used
 *
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n)
{

int root = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (find_sqrt(n, y));
}
