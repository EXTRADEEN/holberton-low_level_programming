#include "main.h"

/**
 * _abs - is a function that computes the absolute value of an integer
 * @abs: integer input
 * Return: absolute value af abs
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		return (-abs);
	}
	return (abs);
}
