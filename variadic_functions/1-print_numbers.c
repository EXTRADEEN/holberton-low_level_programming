#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * followed by a new line
 * @n: numbers of arguments
 * @separator: separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	va_list ap;

	va_start(ap, n);

	j = 0;

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, unsigned int);
		printf("%d", j);
		if (i == n - 1)
			continue;
	if (separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
