#include <stdlib.h>

/**
 * _str_length - finds the length of the string
 * @s: string to determine length
 * Return: string length
 */

int _str_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - dupicates string and returns pointer to news string
 * @str: string to duplicate
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	char *newStr;
	int i = 0, length;

	length = _str_length(str);

	if (str == 0)
		return (0);

	newStr = malloc((length + 1) * sizeof(char));

	if (newStr == 0)
		return (0);

	for (i = 0; i < length; i++)
		newStr[i] = str[i];

	return (newStr);
}
