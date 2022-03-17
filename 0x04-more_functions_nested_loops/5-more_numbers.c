#include "main.h"

/**
 * more_numbers - print 10 times the numbers o to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
		j++;
	}
}

