#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *@dest: string to be used
 *@src: string to be used
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);

}
