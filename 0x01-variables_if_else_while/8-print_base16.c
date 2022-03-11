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

	while (s <= 9)
	{
		putchar(s);
		s++;
	}

	char t = 'a';

	while (t <= 'f')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
