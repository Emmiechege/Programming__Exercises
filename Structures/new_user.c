#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};
/**
 * new_user - allocates memory to a structure
 * @name: struct member
 * @email: struct member
 * @age: struct member
 * Return: user
 */

struct User *new_user(char *name, char *email, int age)
{
	/*Declare a pointer to a User structure*/
	struct User *user;
	/*Allocate memory for the structure*/
	user = malloc(sizeof(struct User));
	if (user == NULL)/*check if memory alocation was succesful*/
	{
		return (NULL);
	}
	/*assigns values to members of the User structure*/
	user->name = name;
	user->email = email;
	user->age = age;
	/*return ponter to the allocated user structure*/
	return (user);
}
/**
 * main - prints members of a structure
 * Return: 0
 */
int main(void)
{
	/*declare a pointer to User structure*/
	struct User *user;

	/*call new_user function to create a new user*/
	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	/*print info about user*/
	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);

	free(user);/*free allocated memory*/
	return (0);
}
