#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function for new_dog
 * @name: Enter the name for the new_dog
 * @age: Enter age for new_dog
 * @owner: Enter owner for new_dog
 * Return: Return struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, j, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
