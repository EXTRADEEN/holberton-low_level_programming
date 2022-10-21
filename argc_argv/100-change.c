#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
int change(int cents);
/**
 * main - a program that prints all arguments it receives
 * @argc: an argument counter
 * @argv: an argument value
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins
 * Return: change
 */
int change(int cents)
{
	int q = 25, d = 10, f = 5, t = 2, o = 1;
	int coins;

	while (cents >= 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= f)
		{
			cents -= f;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= o)
		{
			cents -= o;
			coins++;
		}
	}
	return (coins);
}
