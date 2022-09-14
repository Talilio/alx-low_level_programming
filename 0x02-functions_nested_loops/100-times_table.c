#include "main.h"
/**
 * print_times_table - starting with zero
 * @n: int to be printed
 * Return: Always 0.
 */
void print_times_table(int n)
{
int num1, num2;
if (n >= 0 && n < 15)
{
for (num1 = 0; num1 <= n; num1++)
{
for (num2 = 0; num2 <= n; num2++)
{
if ((num1 * num2) < 10)
{
if (num2 != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar((num2 * num1) + '0');
}
else if ((num1 * num2) < 100)
{
_putchar(' ');
_putchar((((num2 * num1) / 10) % 10) + '0');
_putchar((((num2 * num1) % 10) + '0'); 
}
else if ((num1 * num2) < 1000)
{
_putchar(' ');
_putchar((((num2 * num1) / 100) % 10) + '0');
_putchar((((num2 * num1) / 10) % 10) + '0');
_putchar(((num2 * num1) % 10) + '0');
}
if (num2 != (n))
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}

