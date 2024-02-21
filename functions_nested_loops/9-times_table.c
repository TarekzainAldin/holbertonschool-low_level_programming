#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, col, t;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			t = row * col;

			if (t <= 9)
				_putchar(' ');
			else
				_putchar((t / 10) + '0');

			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
