#include "variadic_functions.h"

/**
 * pchar - print character
 * @ap: va list
 */
void pchar(va_list ap)
{
	printf("%c", va_arg(ap, char));
}

/**
 * pint - print integer
 * @ap: va list
 */
void pint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * pfloat - print float
 * @ap: va list
 */
void pfloat(va_list ap)
{
        printf("%f", va_arg(ap, double));
}

/**
 * pstring - print string
 * @ap: va list
 */
void pstring(va_list ap)
{
	char *c;
	c = va_arg(ap, char *);
	if (c == NULL)
		c =("(nil)");
        printf("%s", c);
}

/**
 * print_all - Is a that print anything
 * @format: any argument
 * @char: format
 */

void print_all(const char * const format, ...)
{
	struct a[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL}
	};

	int i = 0;
	va_list ap;
	va_start(ap, format);
	va_end;
}
