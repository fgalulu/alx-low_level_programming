#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet except q and e
 * and add a new line at the end
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if ((i != 'e') && (i != 'q'))
			putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
