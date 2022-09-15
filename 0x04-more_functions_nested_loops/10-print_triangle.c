#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int incl, inc2;

	if (size > 0)
	{
		for (incl = 1; incl <= size; incl++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}
			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (incl == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}
