#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the struct dog variable.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the dog's owner's name.
 *
 * Description: This function initializes a struct dog variable with the
 * provided values for name, age, and owner. If 'd' is not NULL, the
 * struct's members are updated accordingly.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

