#ifndef DOG_H
#define DOG_H

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

#endif
