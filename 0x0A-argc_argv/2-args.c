#include "main.h"

/**
 * main - main of program
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
