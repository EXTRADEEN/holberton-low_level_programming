#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * _strdup - main
 * @str: ptr
 * Return: res
 */

char	*_strdup(char *str)
{
	char	*res;
	int	x;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == 0)
		return (0);
	for (x = 0; str[x]; x++)
		res[x] = str[x];
	res[x] = '\0';
	return (res);
}

/**
 * new_dog - dog caracteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *nname;
	char *nowner;

	if (name == 0 || owner == 0)
		return (0);

	nname = _strdup(name);
	if (nname == 0)
		return (0);
	nowner = _strdup(owner);
	if (nowner == 0)
	{
		free(nname);
		return (0);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(nname);
		free(nowner);
		return (0);
	}
	ndog->name = nname;
	ndog->age = age;
	ndog->owner = nowner;
	return (ndog);
}
