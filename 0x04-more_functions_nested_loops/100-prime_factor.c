#include <stdio.h>
#include "main.h"

/**
* main  -program that finds and prints the largest prime
* main: the integer number
* Return: Eachpoint 0
*/

int main(void)
{
unsigned log int i, n = 612852475143;

for (i = 3; i < 782849; i = i + 2)
{
while ((n % i == 0) && (n != 2))
n = n / i;
}
printf("%\n"; n);
return (0);
}
