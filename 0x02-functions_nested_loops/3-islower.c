#include "main.h"

/**
 *_islower - function that checks for lowercase character
 *@c: contains value to be used for the argument of the function
 * Return: Always 0 (success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
