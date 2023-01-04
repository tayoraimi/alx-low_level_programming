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
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	else
		_putchar('\n');
	return (1 + _strlen_recursion(s + 1));
	return (0);
}
