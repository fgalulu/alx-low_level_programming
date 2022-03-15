#include "main.h"
/**
 * _isalpha - checks if parameter is an alphabet
 * @c: chater to be converted to ASCII
 *
 * Return: 1 if condition is met. otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
