#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Success
 */
int main(void)

{
int digital_left;
int digital_right;


for (digital_left = 48 ; digital_right <= 58; digital_left++)
{
for (digital_right = digital_left + 1 ; digital_right <= 58; digital_right++)
{

putchar(digital_left);
putchar(digital_right); 


if ((digital_left == 56) && (digital_right == 78))
{
break;
}

putchar(',');
putchar(' ');

}

}

putchar('\n');


return (0);


}
