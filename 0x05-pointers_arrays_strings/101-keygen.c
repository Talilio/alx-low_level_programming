#include "main.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"

/**
 */

int main(void)
{
int a;

srand(time(0));
a = rand ();
printf("%i\n", a);
return (0);
}
