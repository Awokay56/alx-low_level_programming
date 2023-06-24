#include "main.h"

/**
* print_triangle -unction that prints a triangle
* @size: size of the integer
* Return: Eachpoint 0
*/

void print_triangle(int size)
{
int row, space, hash = 0;
if  (size > 0)
{
	while (hash < size)
	{
		space = size - hash - 1;
		while (row < size)
		{
			if (space > row)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			row++;
		}
		hash++;
		row = 0;
		_putchar('\n');
	}
}
else
	_putchar('\n');
}

