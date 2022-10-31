#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer to newly created structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name, *copy_owner;
	unsigned int x, name_len = 0, owner_len = 0;

	new_dog = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		name_len++;

	for (x = 0; owner[x] != '\0'; x++)
		owner_len++;

	copy_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_owner == NULL)
		return (NULL);

	for (x = 0; x <= name_len; x++)
		copy_name[x] = name[x];

	for (x = 0; x <= owner_len; x++)
		copy_owner[x] = owner[x];

	new_dog->name = copy_name;
	new_dog->owner = copy_owner;
	new_dog->age = age;
	return (new_dog);
}
