#include "holberton.h"

/**
 * puts_half - prints half the string
 * @str: string provided
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	
	for (i = (length / 2); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
