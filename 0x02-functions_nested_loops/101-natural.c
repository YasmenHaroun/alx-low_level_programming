#include  <stdio.h>

/**
 * main - Entry piont
 *
 * Return: void
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || (i % 5) == 0))
		{
			sum += sum;
		}
	}
	printf("%d\n",sum);

	return (0);
}
