
#include <unisdtd.h>

/**
 * _putchar - writes the character c to stdout
 * @x: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
