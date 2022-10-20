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
	int n;
	int mul;

	if (argc != 3)
		printf("Error\n");
	return (1);

	i = atoi(argv[1]);
	n = atoi(argv[2]);
	mul = i * n;
		printf("%d\n", mul);
	return (0);
}
