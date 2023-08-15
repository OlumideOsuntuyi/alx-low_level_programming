#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to a struct dog.
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If 'd' is not NULL, the function prints "Name:", "Age:", and "Owner:" followed
 * by the respective values. If any value is missing, "(nil)" is printed.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

