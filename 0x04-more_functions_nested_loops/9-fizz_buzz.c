#include <stdio.h>
#include "main.h"

/**
* main -Entry point
* Description print Fizz instead of the number and for the multiples of five
* Return: Eachpoint 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("FIZZ");
else if (i % 5 == 0)
printf("BUZZ");
else
printf(" % i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
