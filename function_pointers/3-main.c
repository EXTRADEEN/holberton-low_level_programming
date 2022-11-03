#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the main programm that call functions
 * @argc: the number of num
 * @argv: corresponds to each element of the array
 * Return: for success
 **/
int main(int argc, char *argv[])
{
	int result = 0;
	int num1;
	int num2;
	char *s;



	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];

	if (get_op_func(s) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *s == '/') || (num2 == 0 && *s == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(s)(num1, num2);

	printf("%d\n", result);
	return (0);
}
