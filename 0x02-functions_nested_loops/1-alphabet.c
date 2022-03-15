#include "main.h"

/**
 * print_alphabet - print_alphabet function
 * Description: uses the function _putchar to print the alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
