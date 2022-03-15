#include "main.h"
/**
 * print_sign - funtion that check the valueof number
 * @n: parameter to be checked
 *
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
