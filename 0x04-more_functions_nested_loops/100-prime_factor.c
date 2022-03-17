#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: Always 0.
 */
int main(void)
{

unsigned int long n = 612852475143, a;

for (a = 1; a <= n; ++a)
{

	if (n % a == 0)
	{
		printf("%lu \n", n / a);
		break;
	}
	a--;

}

return (0);
}
