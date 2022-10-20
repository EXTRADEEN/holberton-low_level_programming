#include "main.h"
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

	if (argc != 3)
		printf("error");
	return (1);

	i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	return (0);
}
