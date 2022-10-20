#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: an argument counter
 * @argv: an argument value
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[1][n]; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
