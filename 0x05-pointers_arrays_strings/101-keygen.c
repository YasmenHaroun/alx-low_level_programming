#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main -  generate random password for 101-crackme
 *
 * Return: void
 */
int main(void)
{
	int n;
	/*Generate random numer*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
