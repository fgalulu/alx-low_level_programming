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
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
