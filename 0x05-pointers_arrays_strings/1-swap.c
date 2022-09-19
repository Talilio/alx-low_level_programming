#include "main.h"

/**
 * swap_int - swap the valuses of two integers
 * @a: printed int
 * @b: printed int
 * Return: Nothing
 */

void swap_int(int *a, int *b);
{
int i;

i = *a;
*a = *b;
*b = i;
}
