#include <unistd.h>

/**
 * main - Entry point
 * Description: print "and that piece of art is useful" -
 * Dora Korpar, 2015-10-19" to standard error
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(STDERR_FILENO,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\r", 60);
	return (1);
}