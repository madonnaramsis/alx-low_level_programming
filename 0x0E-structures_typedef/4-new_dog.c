#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy -  copies the string pointed to by src, including (\0)
 * to the buffer pointed to by dest.
 * @dest: a pointer to the string.
 * @src: an array of chars.
 *
 * Return: (dest) coppied array.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * _strlen - returns the length of a string.
 * @s: a pointer to the string.
 *
 * Return: void.
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * new_dog - creates a new dog.
 *
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the name of the owner of the dog.
 *
 * Return: The created struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc((_strlen(name)) + 1);
	new_dog->owner = malloc((_strlen(owner)) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
