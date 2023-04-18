#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_a - Typedef for struct dog
 */
typedef struct dog dog_a;

/**
 * struct dog - stores dog information
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_a *new_dog(char *name, float age, char *owner);
void free_dog(dog_a *d);

#endif
