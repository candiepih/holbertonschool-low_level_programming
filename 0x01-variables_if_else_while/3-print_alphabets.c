#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing lowercase alphabets
 * and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char ch2;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
			putchar(ch2);
	putchar('\n');
	return (0);
}
