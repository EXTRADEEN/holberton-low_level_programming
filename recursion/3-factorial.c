#include "main.h"

/**
 * factorial - is a function that returns the factorial of given number
 * @n: an integer
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
