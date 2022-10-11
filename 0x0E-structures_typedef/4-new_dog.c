#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new struct dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if ((name == NULL) || (age < 0) || (owner == NULL))
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(sizeof(char) + (strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return(NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = strcpy(my_dog->owner, owner);

	return (my_dog);
}
