#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: prints the alphabet in lowercase letter
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
