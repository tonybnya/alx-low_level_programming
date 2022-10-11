#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: given string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - copies strings
 * @dest: destination copy
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}

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
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) + (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return(NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);

	return (my_dog);
}
