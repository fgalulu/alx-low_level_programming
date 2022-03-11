#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print all base 16 numbers
 * in lower case and end with new line
 * Return: 0
 */
int main(void)
{
	char s = '0';
	char t = 'a';

	while (s <= 9)
	{
		putchar(s);
		s++;
	}

	while (t <= 'f')
	{
		putchar(t);
		f++;
	}

	putchar('\n');
	return (0);
}
