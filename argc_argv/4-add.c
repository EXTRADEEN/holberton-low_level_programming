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

	int i;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{

		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
