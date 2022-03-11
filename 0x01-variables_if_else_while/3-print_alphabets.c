#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print the alphabet in lower and upper case
 * then newline
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
