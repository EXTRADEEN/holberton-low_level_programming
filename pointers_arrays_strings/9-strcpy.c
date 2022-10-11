#include "main.h"

/**
 * *_strcpy - a function thet copies the string pointet to by src,
 * including the terminating byte (\0), to the buffer pointed to by dest.
 * @src: copy from
 * @src: copy to
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
