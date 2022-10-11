#include "main.h"

/**
 * *_strcpy - a function thet copies the string pointet to by src,
 * including the terminating byte (\0), to the buffer pointed to by dest.
 * @src: copy from
 * @dest: copy to
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *dust = dest;

	while (*src)
		*dest++ = *src++;
	return (dust);
}
