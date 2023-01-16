#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - structure for a basic dog
 *
 * @name: Dog's name
 *
 * @age: Dog's age
 *
 * @owner: Dog's owner
 *
 * Description: data structure for dog
 */
struct dog{
	char *name;
	float owner;
	char *age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
