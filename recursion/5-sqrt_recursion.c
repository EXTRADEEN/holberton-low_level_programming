#include "main.h"

/**
 * _sqrt - find square root
 * @a: prev value
 * @i: squre root value
 * Return: the square root
 */

int _sqrt(int a, int i)
{
	if (a * a == i)
		return (a);
	else if (a * a > i)
		return (-1);
	return (_sqrt(a + 1, i));
}

/**
 * _sqrt_recursion - Is a function that returns,
 * the natural square root of a number
 * @n: an integer
 * Return: squre root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
