#include "main.h"
int _sqrt(int a, int i);

/**
 * _sqrt_recursion - is a function that returns,
 * the natural square root of a number
 * @n: an input integer
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, (n + 1) / 2));

}

/**
 * _sqrt - find square root
 * @a: input
 * @i: count
 * Return: if square root
 */
int _sqrt(int a, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == a)
		return (i);
	else
		return (_sqrt(a, i - 1));
}
