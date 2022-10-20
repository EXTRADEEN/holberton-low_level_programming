#include "main.h"
#include <stdio.h>

/**
 * main - a program that print the number of arguments passed into it
 * @argc: an argument counter
 * @argv: array pointing to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
