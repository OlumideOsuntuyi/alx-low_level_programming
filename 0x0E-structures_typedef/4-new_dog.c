#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog with given attributes.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name of the dog.
 *
 * Return: Pointer to the new dog (success), NULL (failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->name = malloc((i + 1) * sizeof(char));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doge->name[k] = name[k];

	doge->age = age;

	doge->owner = malloc((j + 1) * sizeof(char));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doge->owner[k] = owner[k];

	return (doge);
}

