#include "main.h"
/**
 * print_times_table - starting with zero
 * @n: int to be printed
 * Return: Always 0.
 */
void print_times_table(int n)
{
int num1, num2, num3, num4, num5, num6;

if (n >= 0 && n < 15)
{
for (num1 = 0; num1 <= n; num1++)
{
for (num2 = 0; num2 <= n; num2++)
{
num3 = num1 * num2; num4 = num3 / 100; num5 = (num3 /  10) % 10;
num6 = (num3 % 100) % 10;
if (num2 == 0)
{
_putchar('0');
}
else if (num3 < 10)
{
_putchar(' '); _putchar(' ');
_putchar('0' + num6);
}
else if (num3 < 100)
{
_putchar(' ');
_putchar('0' + num5); _putchar('0' + num6);
}
else
{
_putchar('0' + num4);
_putchar('0' + num5);
_putchar('0' + num6);
}
if (num2 < n)
{
_putchar(','); _putchar(' ');
}
else
_putchar('\n');
}
}
}
}
