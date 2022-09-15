#include <stdio.h>

/**
 * main - find and print the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
long n, a;

n = 612852475143;
for (a = 2; a < n; a++)
{
while (n % a == 0)
n = n / a;
}

printf("%lu\n", n);

return (0);
}
