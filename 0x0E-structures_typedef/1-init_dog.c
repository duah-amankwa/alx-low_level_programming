#include <stdlib.h>
#include "dog.h"

/** 
 * init_dog - initializes a variable of type struct dog
 * @d: name of struc
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 **/

void init_dog(struct dog *d, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
