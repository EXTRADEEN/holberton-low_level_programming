#include "main.h"

/**
 * prime - check nuber division
 * @a: checked number
 * @i: result of division
 * Return: Always o (Success)
 */

int prime(int a, int i)
{
	if (a % i == 0)
		return (0);

	if (i == a / 2)
		return (1);

	return (prime(a, i + 1));
}

/**
 * is_prime_number - Is a function that checks if a number is prime
 * @n: an integer
 * Return: 1 if is true, 0 is false
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

        if (n <= 3)
		return (1);

	return (prime(n, i));
}
