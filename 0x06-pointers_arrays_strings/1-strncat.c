#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to be used
 * @src: string to be used
 * @n: to copy from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);

}
