#include "main.h"

/**
 * _strncpy - a function that copie a string
 *  @dest: to be used
 *  @src: to be used
 *  @n: number of bytes
 *  Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int a;
a = 0;

while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);

}
