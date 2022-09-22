#include "main.h"

/**
 * _strcmp - a function to compare two strings
 * @s1: string ot be used
 * @s2: string to be used
 * Return: Same 0, Different s1 - s2
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);

}
