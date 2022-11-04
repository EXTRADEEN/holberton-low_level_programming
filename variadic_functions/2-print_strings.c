#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * followed by a new line
 * @n: numbers of arguments
 * @separator: separator
 */

void print_string(const char *separator, const unsigned int n, ...)
{
	unsigned int i,;
	char *c;

	va_list ap;

	va_start(ap, n);

	i = 0;

	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		printf("%s", c);
		if (i == n - 1)
			continue;
	if (separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
