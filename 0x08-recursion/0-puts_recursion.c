#include "main.h"
/**
 * _puts_recursion - function that prints a srting and a new line
 * @s : a string
 *
 * return : nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_putchar(*s + 1);
	}
	else
	{
	 _putchar('\n);
	}

}
