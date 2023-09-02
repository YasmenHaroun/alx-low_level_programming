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
	while (argc >= 0)
	{
		printf("%s\n", argv[argc]);
		argc --;
	}

	return (0);
}
