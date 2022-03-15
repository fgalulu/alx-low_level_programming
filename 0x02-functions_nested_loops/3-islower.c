#include "main.h"

/**
 * _islower - _islower function
 * @c: character to be convet to ASCII value
 *
 * Description: check if c is a lower case letter
 * Return: 1 if condition is satisfied. 0 otherwise
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
