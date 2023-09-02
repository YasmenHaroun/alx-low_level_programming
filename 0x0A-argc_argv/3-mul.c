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
	int result;

	if (argc != 3)
		printf("Error\n");
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
