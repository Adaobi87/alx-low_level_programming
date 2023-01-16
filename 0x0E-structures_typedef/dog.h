#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/*
 * File: dog.h
 * Desc: Header file that defines a new type struct dog.
 */


/**
  * struct dog - a new type describing a dog
  * @name: a name of dog
  * @age: age of dog
  * @owner: owner of dog
  */

struct dog
{
	char *name;
	int age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
