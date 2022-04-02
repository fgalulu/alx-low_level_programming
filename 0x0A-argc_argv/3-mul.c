#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
		result *= atoi(argv[i]);

	printf("%d\n", result);
	return (0);
}
