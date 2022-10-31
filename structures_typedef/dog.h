#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 * Description: my struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H */
