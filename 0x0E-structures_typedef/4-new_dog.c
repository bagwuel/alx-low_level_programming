#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to array to be copied to
 * @src: pointer to array to be copied from
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	int i;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i])
		i++;
	new_dog->name = malloc(sizeof(char) * i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i])
		i++;
	new_dog->owner = malloc(sizeof(char) * i + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
