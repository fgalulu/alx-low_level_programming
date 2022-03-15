#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10 function
 * Description : print the alphabet in lower case
 * letter followed by a new line 10 times
 * Return : void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		c = 'a';
	}
}
