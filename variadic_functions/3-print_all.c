#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @vl: entry point
 */
void print_char(va_list vl)
{
	printf("%c", va_arg(vl, int));
}

/**
 * print_int - prints int
 * @vl: entry point
 */
void print_int(va_list vl)
{
	printf("%d", va_arg(vl, int));
}

/**
 * print_float - prints float
 * @vl: entry point
 */
void print_float(va_list vl)
{
	printf("%f", va_arg(vl, double));
}

/**
 * print_str - prints string
 * @vl: entry point
 */
void print_str(va_list vl)
{
	char *c;

	c = va_arg(vl, char *);

	if (c == NULL)
		c = ("(nil)");
	printf("%s", c);
}

/**
 * print_all - prints anything
 * @format: any argument
 */
void print_all(const char * const format, ...)
{
	print_t	f_print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL},
	};
	int	i = 0;
	int	j = 0;
	va_list	args;
	char	*d = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		while (f_print[j].c != NULL && format[i] != *(f_print[j].c))
			j++;
		if (f_print[j].c != NULL)
		{
			printf("%s", d);
			f_print[j].f(args);
			d = ", ";
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);
}
