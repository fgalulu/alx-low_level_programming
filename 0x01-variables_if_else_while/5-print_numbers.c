#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: print numbers from 0 to 9
 * the newline
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
