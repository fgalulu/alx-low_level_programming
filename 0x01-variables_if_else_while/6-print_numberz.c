#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print number from 0 to 9
 * end with a new line
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c < '10')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
