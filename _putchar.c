#include <unistd.h>

/**
 * _putchar - function to print out character
 * @c: Character to print out
 *
 * Return: 1 on success else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
