#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: pointer to struct to free
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
