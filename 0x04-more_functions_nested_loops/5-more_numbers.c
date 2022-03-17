#include "main.h"

/**
 * more_numbers - print 10 times the numbers o to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, k;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			k = i;
			if (k > 9)
			{
				_putchar('1');
				k = i % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
		j++;
	}
}

