#include "main.h"
/**
 *  - a function that prints a string, followed by a new line.
 *
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: An input string to printing
 *
 * Return: Nothing
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
